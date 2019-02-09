//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		if (i % 4 == 1 || i % 4 == 3)
		{
			for (int j = 0; j < m; j++)
			{
				cout << "#";
			}
			cout << endl;
		}
		else if (i % 4 == 2)
		{
			for (int j = 0; j < m - 1; j++)
				cout << ".";
			cout << "#" << endl;
		}
		else
		{
			cout << "#";
			for (int j = 0; j < m - 1; j++)
				cout << ".";
			cout << endl;
		}
	}
	return (0);
}