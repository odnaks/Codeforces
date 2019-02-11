//11.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, l;
	cin >> n >> l;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int max = a[0] * 2;
	if ((l - a[n - 1]) * 2 > max)
		max = (l - a[n - 1]) * 2;
	for (int i = 0; i < n - 1; i++)
		if (a[i + 1] - a[i] > max)
			max = a[i + 1] - a[i];
	double ans = (double)max / 2.0;
	printf("%lf", ans);
	return (0);
}