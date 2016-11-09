
#include "Sphere.h"
#include "MathConstants.h"

Sphere::Sphere(double x, double y, double z, double r) : ThreeDimensionalShape(x, y, z) 
{
	radius = r;
}

// return surface area of Sphere
double Sphere::getArea() const {
	return 0;
}

// return volume of Sphere
double Sphere::getVolume() const  {
	return 0;
}

// return radius of Sphere
double Sphere::getRadius() const { 
	return radius;
}

// output Sphere object
void Sphere::print(ostream & out) const {
	out << "Sphere with radius " << radius 
		<<"; center at (" << xCenter << ", " << yCenter << ")";
}

