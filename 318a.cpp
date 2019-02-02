//02.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	long long int k, n;
	cin >> k >> n;

	if (n <= (k / 2 + k % 2))
		cout << (n * 2 - 1);
	else
	{
		n -= (k / 2 + k % 2);
		cout << (n * 2);
	}
	return (0);
}