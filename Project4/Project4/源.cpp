#include<iostream>

using namespace std;

//圆类的定义
class circle 
{
public:
	float getArea(float r)
	{
		area = 3.14 * r * r;
		return area;
	}
	float showArea()
	{
		return area;
	}
private:
	float radius, area;
};

int main()
{
	float r;
	circle C1;

	cout << "Input Radius:" ;
	cin >> r;

	cout << "Area:" << C1.getArea(r) << endl;

	return 0;
}