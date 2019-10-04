#pragma once
#include "vec2d.h"

class plane
{
private:
	vec2d _pos;
	vec2d _vel;

public:
	plane(const vec2d& pos, const vec2d& vel);
	void simulate(double dt);
	const vec2d& get_pos() const { return _pos; }
};