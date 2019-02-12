//12.02.19 @odnaks
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int m = 5;
	int k = 0;
	while (n > (pow(2, k++) - 1) * 5)
	{
		k++;
		m = (pow(2, k + 1) - 1) * 5;
	}
	m = (pow(2, k) - 1) * 5;
	int tmp = n - m;
	int i = 1;
	while (tmp > i * pow(2, k))
		i++;
	if (i == 1)
		cout << "Sheldon";
	if (i == 2)
		cout << "Leonard";
	if (i == 3)
		cout << "Penny";
	if (i == 4)
		cout << "Rajesh";
	if (i == 5)
		cout << "Howard";
	return (0);
}
