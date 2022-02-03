/*
CH-230-A
a12p6.cpp
Aditya Ojha
ad.ojha@jacobs-university.de
*/
#ifndef _AREA_H
#define _AREA_H
/*public and private properties for area class*/
class Area {
	public:
		Area(const char *n);
		virtual ~Area();
		void getColor() const;
		virtual double calcArea() const = 0;
		/*added for calculation of Perimeter*/
		virtual double calcPerimeter() const = 0;
	private:
		char color[11];
};
#endif
