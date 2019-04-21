//20.04.19 @odnaks

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	string	a;

	cin >> a;
	int n = a.length();
	int i = 0;
	int n_a = 0;
	while (i < n)
	{
		if (a[i] == 'a')
			n_a++;
		i++;
	}
	int n_not_a = n - n_a;
	if (n_not_a < n_a)
		cout << n;
	else
		cout << n_a + n_a - 1;
}
