//31.01.18 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;
	int n = x / 5;
	int os = x % 5;
	if (os != 0)
		cout << n + 1;
	else
		cout << n;
	return (0);
}