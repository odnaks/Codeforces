//31.01.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;
	int max = 0;
	int temp;
	temp = a * b;
	if (temp * c > temp + c)
	{
		if (max < temp * c)
			max = temp * c;
	}
	else
	{
		if (max < temp + c)
			max = temp + c;
	}
	temp = a + b;
	if (temp * c > temp + c)
	{
		if (max < temp * c)
			max = temp * c;
	}
	else 
	{
		if (max < temp + c)
			max = temp + c;
	}
	temp = b + c;
	if (temp * a > temp + a)
	{
		if (max < temp * a)
			max = temp * a;
	}
	else
	{
		if (max < temp + a)
			max = temp + a;
	}
	temp = b * c;
	if (temp * a > temp + a)
	{
		if (max < temp * a)
			max = temp * a;
	}
	else
	{
		if (max < temp + a)
			max = temp + a;
	}
	cout << max;
	return (0);
}