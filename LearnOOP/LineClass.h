#pragma once
#include <iostream>
#include "constLib.h"

namespace Draw
{
	class Line;
	class Rect;

	class Point
	{

	public:

		Point() { x = 0, y = 0; }
		Point(int x, int y) : x(x), y(y) {}

		int x, y;
	};

	class Style
	{
	protected:

		enum class Color
		{
			BLACK,
			RED,
			BROWN,
			GRAY,
			WHITE,
			PINK,
			ORANGE,
			BLUE,
			PURPLE
		};

		short width;
		Color color;
	};

	class Properties : public Style
	{

	public:
		friend Line; friend Rect;
		friend void showInfo(const Properties& a);

	protected:

		void showCoord() const
		{
			std::cout << "{" << beginP.x <<
				", " << beginP.y <<
				", " << endP.x <<
				", " << endP.y << "}" << std::endl;
		}

	private:

		Point endP, beginP;

	public:

		Properties() { endP.x = endP.y = beginP.x = beginP.y = 0; width = 1; color = Color::BLACK; }

		Properties(int x1, int y1, int x2, int y2)
		{
			beginP.x = x1; beginP.y = y1;
			endP.x = x2; endP.y = y2;
			width = 1; color = Color::BLACK;
		}

		virtual void Draw() const
		{
			std::cout << "Nothing" << std::endl;
		}

		virtual void setBeginPoint(int x, int y)
		{
			beginP.x = x;
			beginP.y = y;
		}

		virtual void setEndPoint(int x, int y)
		{
			endP.x = x;
			endP.y = y;
		}

	};

	void showInfo(const Properties& a)
	{
		std::cout << a.beginP.x << std::endl;
	}

	class Line : public Properties
	{
	public:

		Line() : Properties(0,0,0,0) {}
		Line(int x1, int y1, int x2, int y2) : Properties(x1, y1, x2, y2) {}

		void Draw() const override
		{
			std::cout << "Draw line! ";
			showCoord();
		}

		void setBeginPoint(int x, int y)
		{
			std::cout << "Call new setBegin" << std::endl;
			if (x >= -MAX_COORD && x <= MAX_COORD) beginP.x = x;
			if (y >= -MAX_COORD && y <= MAX_COORD) beginP.y = y;

		}

		void setEndPoint(int x, int y)
		{
			std::cout << "Call new setEnd" << std::endl;
			if (x >= -MAX_COORD && x <= MAX_COORD) endP.x = x;
			if (y >= -MAX_COORD && y <= MAX_COORD) endP.y = y;

		}

	};

	class Rect : public Properties
	{
	public:

		Rect() : Properties(0, 0, 0, 0) {}
		Rect(int x1, int y1, int x2, int y2) : Properties(x1, y1, x2, y2) {}

		void Draw() const override
		{
			std::cout << "Draw Rect! ";
			showCoord();
		}

	};

}