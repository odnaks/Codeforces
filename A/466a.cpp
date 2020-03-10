//12.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	int ab;	
	cout << min(min(n * a, (n / m + 1) * b), ((n / m) * b + (n % m) * a));
	return (0);
}