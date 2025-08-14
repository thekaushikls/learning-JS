#include "Point3d.h"
#include <format>

namespace geometry
{
	// Constructors
	Point3d::Point3d()
	{
		X = 0;
		Y = 0;
		Z = 0;
	}

	Point3d::Point3d(double x, double y, double z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	Point3d::Point3d(Point3d& other)
	{
		X = other.X;
		Y = other.Y;
		Z = other.Z;
	}

	Point3d Point3d::Origin()
	{
		return Point3d(0, 0, 0);
	}

	Point3d Point3d::Add(Point3d other) const
	{
		return Point3d(X + other.X, Y + other.Y, Z + other.Z);
	}
	
	Point3d Point3d::Product(double factor) const
	{
		return Point3d(X * factor, Y * factor, Z * factor);
	}

	std::string Point3d::toString() const
	{
		return std::format("({:.2f}, {:.2f}, {:.2f})", X, Y, Z);
	}	
}