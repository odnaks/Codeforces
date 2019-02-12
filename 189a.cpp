//12.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	int v[3];
	cin >> n >> v[0] >> v[1] >> v[2];
	sort(v, v + 3);
	int k[10000] = {0};
	int i;
	for (i = 0; i < v[0]; i++)
		k[i] = 0;
	k[v[0]] = 1;
	k[v[1]] = 1;
	k[v[2]] = 1;
	for (int j = i + 1; j < n + 1; j++)
	{
		int a = 0;
		int b = 0;
		int c = 0;
		if (j > v[1] && k[j - v[1]] != 0)
			b = k[j - v[1]] + 1;
		if (j > v[2] && k[j - v[2]] != 0)
			c = k[j - v[2]] + 1;
		if (k[j - v[0]] != 0)
			a = k[j - v[0]] + 1;
		k[j] = max(max(a, b), max(c, k[j]));
	}
	cout << k[n];
}