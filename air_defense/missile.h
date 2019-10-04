#pragma once
#include "plane.h"

class missile
{
public:
	missile(plane& plane, double radius, double speed, double angle);
	void simulate(double dt);
	void check_explosion();
	bool is_exploded() const { return _exploded; }
private:
	plane& _target;
	double _radius;
	double _speed;
	double _angle;
	vec2d _pos;
	vec2d _vel;
	bool _exploded{ false };
};

