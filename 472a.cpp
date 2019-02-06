//06.02.19 @odnaks
#include <iostream>

using namespace std;

int prime(int a)
{
	for (int i = 2; i < a; i++)
		if (a % i == 0)
			return (0);
	return (1);
}

int main()
{
	int	n;
	cin >> n;
	int	a;
	int b;
	for (int i = 3; i < n; i++)
	{
		a = i;
		b = n - a;
		if (!prime(a) && !prime(b))
		{
			cout << a << " " << b;
			return (0);
		}
	}
	return (0);
}