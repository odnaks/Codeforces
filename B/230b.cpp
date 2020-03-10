//13.02.19 @odnaks
#include <iostream>
#include <math.h>

using namespace std;

int is_prime(long long a)
{
	for (long long i = 2; i < a; i++)
		if ((a % i) == 0)
			return (0);
	return (1);
}

int bin_search(long long a[], long long left,
long long right, long long v)
{
	while (left < right && (right - left) > 1 && v >= a[left] && v <= a[right])
	{
		long long sev = (right - left) / 2 + left;

		if (a[sev] == v || a[left] == v || a[right] == v)
			return(1);
		if (v > a[sev])
			left = sev;
		else
			right = sev;
	}
	return (0);
}

int main()
{
	long long n;
	long long buf = 10001;
	long long t[buf];
	long long k = 0;
	for (long long i = 2; i < 10001; i++)
	{
		if ((is_prime(i)))
		{
			t[k] = i * i;
			k++;
		}
	}
	cin >> n;
	long long cini;
	for (long long j = 0; j < n; j++)
	{
		cin >> cini;
		if (bin_search(t, 0, k, cini))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return (0);
}