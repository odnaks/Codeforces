//11.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int k = 0;
	int s = 0;
	while (a > 0)
	{
		k++;
		s++;
		if (s / b >= 1)
		{
			s -= b;
			a++;
		}
		a--;
	}
	cout << k;
	return (0);
}