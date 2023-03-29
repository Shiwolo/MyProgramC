#include <iostream>

using namespace std;

//字符串转化为整数
int toInteger(const string& s)
{
	int i, flag1 = 0,flag2=0, num=0;
	int start = 0;

	if (s.length() == 0)
	{
		throw "illegal integral format";
	}

	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '-')
		{
			flag1++;
			flag2 = 1;
		}
		else if(s[i]=='+')
		{
			flag1++;
		}
		else if ('0' <= s[i] && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
		}
		else
		{
			throw "illegal integral format";
		}
	}

	if (flag1 > 1)
	{
		throw "illegal integral format";
	}
	else if (flag2 == 1)
	{
		return num * -1;
	}
	else
	{
		return num;
	}
}

int main()
{
	try {
		string s;
		cin >> s;
		cout << toInteger(s) << endl;
	}
	catch (const char* s) {
		cout << s << endl;
	}

	return 0;
}