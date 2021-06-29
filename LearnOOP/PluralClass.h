#pragma once
#include <iostream>

namespace Plural
{

	class Point
	{
	public:
		int x, y;
	};

	class Graph
	{
	public:
		Graph() { std::cout << " Constructor Graph! " << std::endl; }


	protected:
		std::string name;
	};

	class Style : public virtual Graph
	{
	public:
		Style() { std::cout << " Constructor Style! " << std::endl; width = color = 0; }
		Style(short width, short color) : color(color), width(width)
		{
			std::cout << " Constructor Style! " << std::endl;
		}

	protected:
		short width;
		short color;
	};

	class Pos : public virtual Graph
	{
	public:

		Pos() {std::cout << " Constructor Pos! " << std::endl; bp.x = bp.y = ep.x = ep.y = 0; }
		Pos(int x1, int y1, int x2, int y2)
		{
			std::cout << " Constructor Pos! " << std::endl;
			bp.x = x1; bp.y = y1;
			ep.x = x2; ep.y = y2;
		}

		void setCoords(int x1, int y1, int x2, int y2)
		{
			bp.x = x1; bp.y = y1;
			ep.x = x2; ep.y = y2;
		}

	protected:
		Point bp, ep;
	};


	class Line : public Style, public Pos
	{
	public:
		Line() { std::cout << " Constructor Line! " << std::endl; }
		Line(short width, short color) : Pos(), Style(width, color)
		{
			std::cout << " Constructor Line! " << std::endl;
		}

		void Draw()
		{
			std::cout << " Draw Line! " << std::endl;
			std::cout << " Style: " << width << " " << color << std::endl;
			std::cout << " Coords: " << bp.x << "," << bp.y << "," << ep.x << "," << ep.y << std::endl;
		}

	};

}