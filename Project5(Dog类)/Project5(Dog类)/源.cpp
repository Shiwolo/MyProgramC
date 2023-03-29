#include<iostream>

using namespace std;

class Dog
{
public:
	void Input(float a, float w)
	{
		age = a;
		weight = w;
	}
	float OutAge()
	{
		return age;
	}
	float OutWeight()
	{
		return weight;
	}
private:
	float age = 0, weight = 0;
};

int main()
{
	float a, w;
	Dog d1;

	cout << "Input Age and Weight:";
	cin >> a >> w;
	d1.Input(a, w);

	cout << "Dog Age:" << d1.OutAge() << " years" << endl << "Dog Weight:" << d1.OutWeight() << "kg";

	return 0;
}