﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2018 Ryo Suzuki
//	Copyright (c) 2016-2018 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Fwd.hpp"

namespace s3d
{
	enum PianoKey : uint8
	{
		C_1 = 0,
		CS_1,
		DF_1 = CS_1,
		D_1,
		DS_1,
		EF_1 = DS_1,
		E_1,
		FF_1 = E_1,
		F_1,
		ES_1 = F_1,
		FS_1,
		GF_1 = FS_1,
		G_1,
		GS_1,
		AF_1 = GS_1,
		A_1,
		AS_1,
		BF_1 = AS_1,
		B_1,

		CF0 = B_1,
		C0,
		BS_1 = C0,
		CS0,
		DF0 = CS0,
		D0,
		DS0,
		EF0 = DS0,
		E0,
		FF0 = E0,
		F0,
		ES0 = F0,
		FS0,
		GF0 = FS0,
		G0,
		GS0,
		AF0 = GS0,
		A0,
		AS0,
		BF0 = AS0,
		B0,

		CF1 = B0,
		C1,
		BS0 = C1,
		CS1,
		DF1 = CS1,
		D1,
		DS1,
		EF1 = DS1,
		E1,
		FF1 = E1,
		F1,
		ES1 = F1,
		FS1,
		GF1 = FS1,
		G1,
		GS1,
		AF1 = GS1,
		A1,
		AS1,
		BF1 = AS1,
		B1,

		CF2 = B1,
		C2,
		BS1 = C2,
		CS2,
		DF2 = CS2,
		D2,
		DS2,
		EF2 = DS2,
		E2,
		FF2 = E2,
		F2,
		ES2 = F2,
		FS2,
		GF2 = FS2,
		G2,
		GS2,
		AF2 = GS2,
		A2,
		AS2,
		BF2 = AS2,
		B2,

		CF3 = B2,
		C3,
		BS2 = C3,
		CS3,
		DF3 = CS3,
		D3,
		DS3,
		EF3 = DS3,
		E3,
		FF3 = E3,
		F3,
		ES3 = F3,
		FS3,
		GF3 = FS3,
		G3,
		GS3,
		AF3 = GS3,
		A3,
		AS3,
		BF3 = AS3,
		B3,

		CF4 = B3,
		C4,
		BS3 = C4,
		CS4,
		DF4 = CS4,
		D4,
		DS4,
		EF4 = DS4,
		E4,
		FF4 = E4,
		F4,
		ES4 = F4,
		FS4,
		GF4 = FS4,
		G4,
		GS4,
		AF4 = GS4,
		A4,
		AS4,
		BF4 = AS4,
		B4,

		CF5 = B4,
		C5,
		BS4 = C5,
		CS5,
		DF5 = CS5,
		D5,
		DS5,
		EF5 = DS5,
		E5,
		FF5 = E5,
		F5,
		ES5 = F5,
		FS5,
		GF5 = FS5,
		G5,
		GS5,
		AF5 = GS5,
		A5,
		AS5,
		BF5 = AS5,
		B5,

		CF6 = B5,
		C6,
		BS5 = C6,
		CS6,
		DF6 = CS6,
		D6,
		DS6,
		EF6 = DS6,
		E6,
		FF6 = E6,
		F6,
		ES6 = F6,
		FS6,
		GF6 = FS6,
		G6,
		GS6,
		AF6 = GS6,
		A6,
		AS6,
		BF6 = AS6,
		B6,

		CF7 = B6,
		C7,
		BS6 = C7,
		CS7,
		DF7 = CS7,
		D7,
		DS7,
		EF7 = DS7,
		E7,
		FF7 = E7,
		F7,
		ES7 = F7,
		FS7,
		GF7 = FS7,
		G7,
		GS7,
		AF7 = GS7,
		A7,
		AS7,
		BF7 = AS7,
		B7,

		CF8 = B7,
		C8,
		BS7 = C8,
		CS8,
		DF8 = CS8,
		D8,
		DS8,
		EF8 = DS8,
		E8,
		FF8 = E8,
		F8,
		ES8 = F8,
		FS8,
		GF8 = FS8,
		G8,
		GS8,
		AF8 = GS8,
		A8,
		AS8,
		BF8 = AS8,
		B8,

		CF9 = B8,
		C9,
		BS8 = C9,
		CS9,
		DF9 = CS9,
		D9,
		DS9,
		EF9 = DS9,
		E9,
		FF9 = E9,
		F9,
		ES9 = F9,
		FS9,
		GF9 = FS9,
		G9,
	};

	/// <summary>
	/// GM 音色
	/// </summary>
	enum GMInstrument : uint8
	{
		// Piano
		Piano1,
		Piano2,
		Piano3,
		Piano4,
		ElectricPiano1,
		ElectricPiano2,
		Harpsichord,
		Clavinet,

		// Chromatic Percussion
		Celesta,
		Glockenspiel,
		MusicBox,
		Vibraphone,
		Marimba,
		Xylophone,
		TubularBells,
		Dulcimer,

		// Organ
		DrawbarOrgan,
		PercussiveOrgan,
		RockOrgan,
		ChurchOrgan,
		ReedOrgan,
		Accordion,
		Harmonica,
		TangoAccordion,

		//Guitar
		NylonGuitar,
		SteelGuitar,
		JazzGuitar,
		CleanGuitar,
		MutedGuitar,
		OverdrivenGuitar,
		DistortionGuitar,
		GuitarHarmonics,

		// Bass
		AcousticBass,
		FingeredBass,
		PickedBass,
		FretlessBass,
		SlapBass1,
		SlapBass2,
		SynthBass1,
		SynthBass2,

		// Strings
		Violin,
		Viola,
		Cello,
		Contrabass,
		TremoloStrings,
		PizzicatoStrings,
		OrchestralHarp,
		Timpani,

		// Ensemble
		StringEnsemble1,
		StringEnsemble2,
		SynthStrings1,
		SynthStrings2,
		ChoirAahs,
		VoiceOohs,
		SynthChoir,
		OrchestraHit,

		// Brass
		Trumpet,
		Trombone,
		Tuba,
		MutedTrumpet,
		FrenchHorn,
		BrassSection,
		SynthBrass1,
		SynthBrass2,

		// Reed
		SopranoSax,
		AltoSax,
		TenorSax,
		BaritoneSax,
		Oboe,
		EnglishHorn,
		Bassoon,
		Clarinet,

		// Pipe
		Piccolo,
		Flute,
		Recorder,
		PanFlute,
		Blownbottle,
		Shakuhachi,
		Whistle,
		Ocarina,

		// Synth Lead
		SquareWave,
		SawWave,
		SynCalliope,
		ChifferLead,
		Charang,
		SoloVox,
		FifthSawWave,
		BassAndLead,

		// Synth Pad
		Fantasia,
		WarmPad,
		Polysynth,
		SpaceVoice,
		BowedGlass,
		MetalPad,
		HaloPad,
		SweepPad,

		// Synth Effects
		IceRain,
		Soundtrack,
		Crystal,
		Atmosphere,
		Brightness,
		Goblin,
		EchoDrops,
		StarTheme,

		// Ethnic
		Sitar,
		Banjo,
		Shamisen,
		Koto,
		Kalimba,
		Bagpipe,
		Fiddle,
		Shanai,

		// Percussive
		TinkleBell,
		Agogo,
		SteelDrums,
		Woodblock,
		TaikoDrum,
		MelodicTom,
		SynthDrum,
		ReverseCymbal,

		// Sound effects
		GuitarFretNoise,
		BreathNoise,
		Seashore,
		BirdTweet,
		TelephoneRing,
		Helicopter,
		Applause,
		Gunshot,
	};
}
