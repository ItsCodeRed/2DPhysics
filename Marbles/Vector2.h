#pragma once
#include <iostream>

class Vec2
{
public:
	float x;
	float y;

	Vec2()
	{
		x = 0;
		y = 0;
	}

	Vec2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}

	// Standard math operators
	Vec2 operator+(const Vec2& other)
	{
		return Vec2(x + other.x, y + other.y);
	}

	Vec2 operator-(const Vec2& other)
	{
		return Vec2(x - other.x, y - other.y);
	}

	Vec2 operator*(const Vec2& other)
	{
		return Vec2(x * other.x, y * other.y);
	}

	Vec2 operator/(const Vec2& other)
	{
		return Vec2(x / other.x, y / other.y);
	}

	// Assignment math operators
	Vec2& operator+=(const Vec2& other)
	{
		x += other.x;
		y += other.y;
		return *this;
	}

	Vec2& operator-=(const Vec2& other)
	{
		x -= other.x;
		y -= other.y;
		return *this;
	}

	Vec2& operator*=(const Vec2& other)
	{
		x *= other.x;
		y *= other.y;
		return *this;
	}

	Vec2& operator/=(const Vec2& other)
	{
		x /= other.x;
		y /= other.y;
		return *this;
	}
};

std::ostream& operator << (std::ostream& outs, const Vec2& v);

Vec2 operator*(const Vec2& v, const float n);

Vec2 operator/(const Vec2& v, const float n);

Vec2 operator*(const float n, const Vec2& v);

Vec2 operator/(const float n, const Vec2& v);
