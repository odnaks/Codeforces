//06.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int	n;
	cin >> n;
	int d[n];
	int v[n];
	for (int i = 0; i < n; i++)
		cin >> d[i] >> v[i];
	int k = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
				if (d[i] == v[j])
					k++;
	cout << k;
	return 0;
}