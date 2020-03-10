//12.02.19
#include <iostream>

using namespace std;

int main()
{
	int n, min, max, k;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	k = 0;
	min = a[0];
	max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] > max)
		{
			k++;
			max = a[i];
		}
		if (a[i] < min)
		{
			k++;
			min = a[i];
		}	
	}
	cout << k;
	return (0);
}