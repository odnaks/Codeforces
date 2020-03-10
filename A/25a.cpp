//04.02.18 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int i_1 = 0;
	int i_2 = 0;
	int	k_1 = 0;
	int	k_2 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 1)
		{
			k_2++;
			i_2 = i + 1;
		}
		else
		{
			k_1++;
			i_1 = i + 1;
		}
	}
	if (k_2 == 1)
		cout << i_2;
	else
		cout << i_1;
	return (0);
}