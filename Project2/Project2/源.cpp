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
		if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && (d == 31))
		{
			d = 1;
			m++;
		}
		if (m == 12 && d == 31)
		{
			d = 1;
			m = 1;
			y++;
		}
		if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 30)
		{
			d = 1;
			m++;
		}
		if ((m == 2 && ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))) && d == 29)
		{
			d = 1;
			m++;
		}
		if ((m == 2 && ((y % 4 != 0) || (y % 100 == 0 && y & 400 != 0))) && d == 28)
		{
			d = 1;
			m++;
		}else if(m!=1)
		{
			d++;
		}
		
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