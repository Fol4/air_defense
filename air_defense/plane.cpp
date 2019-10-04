#include "plane.h"

plane::plane(const vec2d& pos, const vec2d& vel) : _pos{ pos }, _vel{ vel }
{}

void plane::simulate(double dt)
{
	_pos += _vel * dt;
}