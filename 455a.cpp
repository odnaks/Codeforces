//11.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long int n;
	cin >> n;
	long long int a[n];
	long long int c[100005] = {0};
	long long int b[100005] = {0};
	for (long long int i = 0; i < n; i++)
	{
		cin >> a[i];
		c[a[i]]+= a[i];
	}
	b[0] = 0;
	b[1] = c[1];
	for (long long int i = 2; i < 100005; i++)
	{
		b[i] = max(b[i - 1], (b[i - 2] + c[i]));
	}
	cout << b[100001];
	return (0);
}