//12.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		cout << b << " ";
		a -= b;
		cout << a / 2;
	}
	else
	{
		cout << a << " ";
		b -= a;
		cout << b / 2;
	}
	return (0);
}