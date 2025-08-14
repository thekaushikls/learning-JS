#pragma once
#include <string>

namespace geometry
{
	class Point3d
	{
	public:
		// Constructors
		Point3d();
		Point3d(double x, double y, double z);
		Point3d(Point3d& other);

		// Static Properties
		static Point3d Unset();
		static Point3d Origin();

		// Methods
		Point3d Add(Point3d pointB) const;
		Point3d Product(double factor) const;
		std::string toString() const;
		

	private:
		double X;
		double Y;
		double Z;
	};
}