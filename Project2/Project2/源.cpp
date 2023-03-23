#include  <iostream>
using  namespace  std;
class  Date
{
public:
	Date()
	{
		cout << "Input  Date:";
		cin >> y >> m >> d;
	}
	int  beLeapYear()
	{
		return  ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
	}
	void  addOneDay()
	{

	}
	void  showDate()
	{
		cout << y << "-" << m << "-" << d << endl;
	}
private:
	int  y, m, d;
};
int  main()
{
	Date  d;
	d.showDate();
	d.addOneDay();
	d.showDate();
}