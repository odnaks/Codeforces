//31.01.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, j, k;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		k = 0;
		if (a[i] <= a[i + 1])
			k++;
		while ((i != (n - 1)) && a[i] <= a[i + 1])
		{
			k++;
			i++;
		}
		if (k > max)
			max = k;
	}
	cout << max;
	return (0);
}