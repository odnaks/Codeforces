//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int s, n;
	cin >> s >> n;
	int x[n], y[n];
	for (int i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (x[i] > x[j])
			{
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;

				temp = y[i];
				y[i] = y[j];
				y[j] = temp;
			}
	for (int i = 0; i < n; i++)
	{
		if (s <= x[i])
			{
				cout << "NO";
				return (0);
			}	
		s += y[i];
	}
	cout << "YES";
	
	return (0);
}