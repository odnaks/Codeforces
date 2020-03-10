//13.02.19 @odnaks
#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b)
{
	int max = 1;
	for (int i = 1; i <= min(a, b); i++)
		if (a % i == 0 && b % i == 0)
			max = i;
	return (max);
}

int main()
{
	int a, b, n;
	cin >> a >> b >> n;
	int k = 0;
	while (n > 0)
	{
		if (k % 2 == 0)
		{
			if (n >= gcd(n, a))
			{
				n -= gcd(n, a);
				k++;
			}
			else
				break;
		}
		else
		{
			if (n >= gcd(n, b))
			{
				n -= gcd(n, b);
				k++;			
			}
			else
				break;
		}
	}
	cout << (k + 1) % 2;
	return (0);
}