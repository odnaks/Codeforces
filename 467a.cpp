#include <iostream>

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	int p[n];
	int q[n];
	for (int i = 0; i < n; i++)
		cin >> p[i] >> q[i];
	int k = 0;
	for (int i = 0; i < n; i++)
		if (q[i] - p[i] > 1)
			k++;
	cout << k;
	return 0;
}