#pragma once
#include <cmath>

struct vec2d
{
	vec2d() = default;
	vec2d(double xx, double yy);
	void operator+=(const vec2d& rhs);

	double _x{};
	double _y{};
};

vec2d operator-(const vec2d& lhs, const vec2d& rhs);
vec2d operator*(const vec2d& lhs, double rhs);
double length(const vec2d& v);