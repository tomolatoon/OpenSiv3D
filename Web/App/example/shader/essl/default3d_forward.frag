# version 300 es

//	Copyright (c) 2008-2021 Ryo Suzuki.
//	Copyright (c) 2016-2021 OpenSiv3D Project.
//	Licensed under the MIT License.

precision mediump float;


//
//	Textures
//
uniform sampler2D Texture0;

//
//	PSInput
//
in vec3 WorldPosition;
in vec2 UV;
in vec3 Normal;

//
//	PSOutput
//
layout(location = 0) out vec4 FragColor;

//
//	Constant Buffer
//
layout(std140) uniform PSPerFrame // slot 0
{
	vec3 g_gloablAmbientColor;
	vec3 g_sunColor;
	vec3 g_sunDirection;
};

layout(std140) uniform PSPerView // slot 1
{
	vec3 g_eyePosition;
};

layout(std140) uniform PSPerMaterial // slot 3
{
	vec3  g_amibientColor;
	uint  g_hasTexture;
	vec4  g_diffuseColor;
	vec3  g_specularColor;
	float g_shininess;
	vec3  g_emissionColor;
};

//
//	Functions
//
vec4 GetDiffuseColor(vec2 uv)
{
	vec4 diffuseColor = g_diffuseColor;

	if (g_hasTexture == 1u)
	{
		diffuseColor *= texture(Texture0, uv);
	}

	return diffuseColor;
}

vec3 CalculateDiffuseReflection(vec3 n, vec3 l, vec3 lightColor, vec3 diffuseColor, vec3 ambientColor)
{
	vec3 directColor = lightColor * max(dot(n, l), 0.0f);
	return ((ambientColor + directColor) * diffuseColor);
}

vec3 CalculateSpecularReflection(vec3 n, vec3 h, float shininess, float nl, vec3 lightColor, vec3 specularColor)
{
	float highlight = pow(max(dot(n, h), 0.0f), shininess) * float(0.0f < nl);
	return (lightColor * specularColor * highlight);
}

void main()
{
	vec3 lightColor		= g_sunColor;
	vec3 lightDirection	= g_sunDirection;

	vec3 n = normalize(Normal);
	vec3 l = lightDirection;
	vec4 diffuseColor = GetDiffuseColor(UV);
	vec3 ambientColor = (g_amibientColor * g_gloablAmbientColor);

	// Diffuse
	vec3 diffuseReflection = CalculateDiffuseReflection(n, l, lightColor, diffuseColor.rgb, ambientColor);

	// Specular
	vec3 v = normalize(g_eyePosition - WorldPosition);
	vec3 h = normalize(v + lightDirection);
	vec3 specularReflection = CalculateSpecularReflection(n, h, g_shininess, dot(n, l), lightColor, g_specularColor);

	FragColor = vec4(diffuseReflection + specularReflection + g_emissionColor, diffuseColor.a);
}
