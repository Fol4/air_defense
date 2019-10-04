#include "missile.h"
#include <iostream>


missile::missile(plane& plane, double radius,
				double speed, double angle): _vel{speed* std::cos(angle), speed* std::sin(angle)}, _radius{radius}, _target{plane}
{
	if (&_target == NULL) throw std::runtime_error("...");
	if (speed <= 0 || radius <= 0) throw ("Invalid settings of missile");
}

void missile::simulate(double dt)
{
	_pos += _vel * dt;
	check_explosion();
}

void missile::check_explosion()
{
	if (length((_pos - _target.get_pos())) <= _radius) _exploded = true;
}