//11.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int k = 0;
	while (n > 0)
	{
		k++;
		if (k % m == 0)
			n++;
		n--;
	}
	cout << k;
	return (0);
}