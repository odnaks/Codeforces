//13.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int m = 5 - k;
	int i = 0;
	while (a[i] <= m)
		i++;
	cout << i / 3;
	return (0);
}