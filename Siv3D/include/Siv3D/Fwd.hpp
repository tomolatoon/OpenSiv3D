//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2017 Ryo Suzuki
//	Copyright (c) 2016-2017 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# pragma once
# include "Platform.hpp"
# include "Types.hpp"

namespace s3d
{
	//////////////////////////////////////////////////////
	//
	//	PlaceHolder.hpp
	//
	struct PlaceHolder_t;

	//////////////////////////////////////////////////////
	//
	//	Uncopyable.hpp
	//
	class Uncopyable;

	//////////////////////////////////////////////////////
	//
	//	Byte.hpp
	//
	enum class Byte : unsigned char;

	//////////////////////////////////////////////////////
	//
	//	ByteArrayView.hpp
	//
	class ByteArrayView;

	//////////////////////////////////////////////////////
	//
	//	ConcurrentTask.hpp
	//
	template <class Type> class ConcurrentTask;

	//////////////////////////////////////////////////////
	//
	//	AlignedAllocator.hpp
	//
	template <class Type, size_t Alignment> class AlignedAllocator;
	template <class Type> struct DefaultAllocator;

	//////////////////////////////////////////////////////
	//
	//	Array.hpp
	//
	template <class Type, class Allocator> class Array;

	//////////////////////////////////////////////////////
	//
	//	InfiniteList.hpp
	//
	template <class Type> class infinite_list;

	//////////////////////////////////////////////////////
	//
	//	Grid.hpp
	//
	template <class Type, class Allocator> class Grid;

	//////////////////////////////////////////////////////
	//
	//	Optional.hpp
	//
	struct None_t;
	template <class Type> class Optional;

	//////////////////////////////////////////////////////
	//
	//	RangeIterator.hpp
	//
	template <class Iterator> class RangeIterator;

	//////////////////////////////////////////////////////
	//
	//	StringView.hpp
	//
	class StringView;

	//////////////////////////////////////////////////////
	//
	//	String.hpp
	//
	class String;
	using FilePath = String;
	
	//////////////////////////////////////////////////////
	//
	//	Unicode.hpp
	//
	struct Translator_UTF8toUTF32;
	struct Translator_UTF16toUTF32;
	struct Translator_UTF32toUTF8;
	struct Translator_UTF32toUTF16;

	//////////////////////////////////////////////////////
	//
	//	LetterCase.hpp
	//
	enum class LetterCase;

	//////////////////////////////////////////////////////
	//
	//	BigInt.hpp
	//
	class BigInt;

	//////////////////////////////////////////////////////
	//
	//	BigFloat.hpp
	//
	class BigFloat;

	//////////////////////////////////////////////////////
	//
	//	Format.hpp
	//
	struct FormatData;

	//////////////////////////////////////////////////////
	//
	//	Date.hpp
	//
	struct Date;

	//////////////////////////////////////////////////////
	//
	//	DateTime.hpp
	//
	struct DateTime;

	//////////////////////////////////////////////////////
	//
	//	Stopwatch.hpp
	//
	class Stopwatch;

	//////////////////////////////////////////////////////
	//
	//	CustomStopwatch.hpp
	//
	class CustomStopwatch;

	//////////////////////////////////////////////////////
	//
	//	Timer.hpp
	//
	class Timer;

	//////////////////////////////////////////////////////
	//
	//	TimeProfiler.hpp
	//
	class TimeProfiler;

	//////////////////////////////////////////////////////
	//
	//	MillisecClock.hpp
	//
	class MillisecClock;

	//////////////////////////////////////////////////////
	//
	//	MicrosecClock.hpp
	//
	class MicrosecClock;

	//////////////////////////////////////////////////////
	//
	//	RDTSCClock.hpp
	//
	class RDTSCClock;

	//////////////////////////////////////////////////////
	//
	//	FileSystem.hpp
	//
	enum class OpenMode;
	enum class CopyOption;
	enum class SpecialFolder;

	//////////////////////////////////////////////////////
	//
	//	IReader.hpp
	//
	class IReader;

	//////////////////////////////////////////////////////
	//
	//	IWriter.hpp
	//
	class IWriter;

	//////////////////////////////////////////////////////
	//
	//	ReaderView.hpp
	//
	class ReaderView;

	//////////////////////////////////////////////////////
	//
	//	MemoryMapping.hpp
	//
	class MemoryMapping;

	//////////////////////////////////////////////////////
	//
	//	WritableMemoryMapping.hpp
	//
	class WritableMemoryMapping;
	enum class MMFOpenMode_if_Exists;
	enum class MMFOpenMode_if_NotFound;

	//////////////////////////////////////////////////////
	//
	//	ByteArray.hpp
	//
	class ByteArray;

	//////////////////////////////////////////////////////
	//
	//	MemoryWriter.hpp
	//
	class MemoryWriter;

	//////////////////////////////////////////////////////
	//
	//	BinaryReader.hpp
	//
	class BinaryReader;

	//////////////////////////////////////////////////////
	//
	//	BinaryWriter.hpp
	//
	class BinaryWriter;

	//////////////////////////////////////////////////////
	//
	//	TextEncoding.hpp
	//
	enum class TextEncoding;

	//////////////////////////////////////////////////////
	//
	//	TextReader.hpp
	//
	class TextReader;

	//////////////////////////////////////////////////////
	//
	//	TextWriter.hpp
	//
	class TextWriter;

	//////////////////////////////////////////////////////
	//
	//	MD5.hpp
	//
	struct MD5Value;

	//////////////////////////////////////////////////////
	//
	//	LicenseManager.hpp
	//
	struct LicenseInfo;

	//////////////////////////////////////////////////////
	//
	//	Logger.hpp
	//
	enum class OutputLevel;
	enum class LogDescription;

	//////////////////////////////////////////////////////
	//
	//	CSVData.hpp
	//
	class CSVData;

	//////////////////////////////////////////////////////
	//
	//	INIData.hpp
	//
	class INIData;

	//////////////////////////////////////////////////////
	//
	//	JSONReader.hpp
	//
	enum class JSONValueType;
	class JSONArrayIterator;
	class JSONObjectIterator;
	class JSONArrayView;
	class JSONObjectView;
	class JSONValue;
	struct JSONObjectMember;
	class JSONReader;

	//////////////////////////////////////////////////////
	//
	//	HTMLWriter.hpp
	//
	class HTMLWriter;

	//////////////////////////////////////////////////////
	//
	//	Color.hpp
	//
	struct Color;
	struct ColorF;

	//////////////////////////////////////////////////////
	//
	//	HSV.hpp
	//
	struct HSV;

	//////////////////////////////////////////////////////
	//
	//	PointVector.hpp
	//
	struct Point;
	using Size = Point;
	template <class Type> struct Vector2D;
	template <class Type> struct Vector3D;
	template <class Type> struct Vector4D;
	using Float2	= Vector2D<float>;
	using Vec2		= Vector2D<double>;
	using Float3	= Vector3D<float>;
	using Vec3		= Vector3D<double>;
	using Float4	= Vector4D<float>;
	using Vec4		= Vector4D<double>;

	//////////////////////////////////////////////////////
	//
	//	Circular.hpp
	//
	template <int32 Oclock> struct CircularBase;
	using Circular  = CircularBase<0>;
	using Circular0 = CircularBase<0>;
	using Circular3 = CircularBase<3>;
	using Circular6 = CircularBase<6>;
	using Circular9 = CircularBase<9>;
		
	//////////////////////////////////////////////////////
	//
	//	OffsetCircular.hpp
	//
	template <int32 Oclock> struct OffsetCircularBase;
	using OffsetCircular  = OffsetCircularBase<0>;
	using OffsetCircular0 = OffsetCircularBase<0>;
	using OffsetCircular3 = OffsetCircularBase<3>;
	using OffsetCircular6 = OffsetCircularBase<6>;
	using OffsetCircular9 = OffsetCircularBase<9>;

	//////////////////////////////////////////////////////
	//
	//	Cylindrical.hpp
	//
	struct Cylindrical;

	//////////////////////////////////////////////////////
	//
	//	Spherical.hpp
	//
	struct Spherical;

	//////////////////////////////////////////////////////
	//
	//	Mat3x2.hpp
	//
	struct Mat3x2;

	//////////////////////////////////////////////////////
	//
	//	Line.hpp
	//
	struct LineStyle;
	struct Line;

	//////////////////////////////////////////////////////
	//
	//	Rectangle.hpp
	//
	template <class SizeType> struct Rectangle;
	using Rect = Rectangle<Point>;
	using RectF = Rectangle<Vec2>;

	//////////////////////////////////////////////////////
	//
	//	Circle.hpp
	//
	struct Circle;

	//////////////////////////////////////////////////////
	//
	//	Ellipse.hpp
	//
	struct Ellipse;

	//////////////////////////////////////////////////////
	//
	//	Triangle.hpp
	//
	struct Triangle;

	//////////////////////////////////////////////////////
	//
	//	Quad.hpp
	//
	struct Quad;

	//////////////////////////////////////////////////////
	//
	//	RoundRect.hpp
	//
	struct RoundRect;

	//////////////////////////////////////////////////////
	//
	//	LineString.hpp
	//
	class LineString;

	//////////////////////////////////////////////////////
	//
	//	Polygon.hpp
	//
	class Polygon;

	//////////////////////////////////////////////////////
	//
	//	Bezier2.hpp
	//
	struct Bezier2;
	struct Bezier2Path;

	//////////////////////////////////////////////////////
	//
	//	Bezier3.hpp
	//
	struct Bezier3;
	struct Bezier3Path;

	//////////////////////////////////////////////////////
	//
	//	EasingController.hpp
	//
	template <class Type> class EasingController;

	//////////////////////////////////////////////////////
	//
	//	Transition.hpp
	//
	class Transition;

	//////////////////////////////////////////////////////
	//
	//	PerlinNoise.hpp
	//
	class PerlinNoise;

	//////////////////////////////////////////////////////
	//
	//	MathParser.hpp
	//
	class MathParser;

	//////////////////////////////////////////////////////
	//
	//	Image.hpp
	//
	class Image;

	//////////////////////////////////////////////////////
	//
	//	ImageFormat.hpp
	//
	enum class ImageFormat;
	enum class PPMType;
	class IImageFormat;

	//////////////////////////////////////////////////////
	//
	//	TextureFormat.hpp
	//
	enum class TextureFormat;

	//////////////////////////////////////////////////////
	//
	//	WaveSample.hpp
	//
	struct WaveSampleS16;
	struct WaveSample;

	//////////////////////////////////////////////////////
	//
	//	Wave.hpp
	//
	class Wave;

	//////////////////////////////////////////////////////
	//
	//	AudioFormat.hpp
	//
	enum class AudioFormat;
	enum class WAVEFormat;
	class IAudioFormat;

	//////////////////////////////////////////////////////
	//
	//	CPU.hpp
	//
	enum class CPUVendor;
	struct CPUFeature;

	//////////////////////////////////////////////////////
	//
	//	Monitor.hpp
	//
	struct Monitor;

	//////////////////////////////////////////////////////
	//
	//	Window.hpp
	//
	enum class ShowState;
	struct WindowState;
}
