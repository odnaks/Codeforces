//12.02.19 @odnaks
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a < 0)
	{
		int b = abs(a % 10);
		int c = abs((a / 10) % 10);
		if (b > c)
			cout << a / 10;
		else
		{
			if ((a / 100) == 0 && b == 0)
				cout << 0;
			else
			{
				if ((a / 100) == 0)
					cout << "-";
				else
					cout << (a / 100);
				cout << b;	
			}
		}
	}
	else
		cout << a;
	return (0);
}