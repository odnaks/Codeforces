//31.01.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int a[m];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	sort(&a[0], &a[m]);
	int k = m - n;
	int i = 0;
	int min = a[m - 1] - a[0];
	while (i <= k)
	{
		if ((a[i + n - 1] - a[i]) < min)
			min = (a[i + n - 1] - a[i]);
		i++;
	}
	cout << min;
	return (0);
}