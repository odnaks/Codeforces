//04.02.19 @odnaks
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int	n, m;
	cin >> n >> m;

	int win = 0;
	while (min(n, m) > 0)
	{
		if (min(n, m) == n)
			n--;
		else
			m--;
		if (win == 1)
			win = 0;
		else
			win = 1;
	}
	if (win == 1)
		cout << "Akshat";
	else
		cout << "Malvika";
	return (0);
}