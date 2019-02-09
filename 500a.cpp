//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;
	int a[n];
	for (int i = 1; i < n; i++)
		cin >> a[i];
	int i = 1;
	while (i < n)
	{
		i += a[i];
		if (i == t)
		{
			cout << "YES";
			return (0);
		}
	}
	cout << "NO";

	return (0);
}