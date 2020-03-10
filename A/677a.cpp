//03.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, h;
	cin >> n >> h;
	int k = 0;
	int p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		k++;
		if (p > h)
			k++;
	}
	cout << k;
	return (0);
}