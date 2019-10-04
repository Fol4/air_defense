#include "vec2d.h"

vec2d::vec2d(double xx, double yy) : _x{ xx }, _y{ yy }
{}

void vec2d::operator+=(const vec2d& rhs)
{
	_x += rhs._x;
	_y += rhs._y;
}

vec2d operator-(const vec2d& lhs, const vec2d& rhs)
{
	return vec2d{ lhs._x - rhs._x, lhs._y - rhs._y };
}

vec2d operator*(const vec2d& lhs, double rhs)
{
	return vec2d{ lhs._x * rhs, lhs._y * rhs };
}

double length(const vec2d& v)
{
	return sqrt(v._x * v._x + v._y * v._y); 
}
