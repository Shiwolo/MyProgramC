#include<iostream>
#include<cmath>

using namespace std;

class Particle
{
public:
	Particle(long  double px, long  double py, long  double pz, long  double pmass);
	long double operator - (const Particle& p2);
	long  double x = 0, y = 0, z = 0;
	long  double mass = 0;
};
Particle::Particle(long  double px, long  double py, long  double pz, long  double pmass)
{
	x = px;
	y = py;
	z = pz;
	mass = pmass;
}
long double Particle::operator - (const Particle& p2)
{
	long double G = 6.67e-11;
	long double r2, F;

	r2 = pow(this->x - p2.x, 2) + pow(this->y - p2.y, 2) + pow(this->z - p2.z, 2);
	F = G * this->mass * p2.mass / r2;

	return F;
}


int  main()
{
	long  double  x, y, z, mass;
	cin >> x >> y >> z >> mass;
	Particle  p1(x, y, z, mass);
	cin >> x >> y >> z >> mass;
	const  Particle  p2(x, y, z, mass);

	long  double  force = p1 - p2;
	printf("Gravity  between  two  objects  =  %.1Lf  N", force);
	return  0;
}
