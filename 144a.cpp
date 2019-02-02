//02.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n;
	int min = 101;
	int min_i = 0;
	int max = 0;
	int max_i = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] > max)
		{
			max = a[i];
			max_i = i;
		}
		if (a[i] <= min)
		{
			min = a[i];
			min_i = i;
		}
	}
	int k = 0;
	k = n - min_i + max_i - 1;
	if (max_i > min_i)
		k--;
	cout << k;
	return (0);
}