//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int p[n];
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		s += p[i];
	}
	cout << ((double)s / (double)n);
	return (0);
}