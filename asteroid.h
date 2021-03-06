#pragma once
#include "moveable.h"

class Asteroid : public Moveable
{
public:
	Asteroid(int x, int y, double dx, double dy, int id, int objectX, int objectY) : Moveable(x, y, dx, dy, false, objectX, objectY), radius(objectY), id(id) {};
	~Asteroid()	{ };

	void draw();
	int getRadius() { return this->radius; }
private:
	int radius;
	int id;
};

