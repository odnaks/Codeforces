//31.01.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int date;
	char a[4];
	cin >> date;

	date++;
	while (1)
	{
		int tmp = date;
		for (int i = 0; i < 4; i++)
		{
			a[i] = tmp % 10;
			tmp /= 10;
		}
		int flag = 0;
		for (int i = 0; i < 4; i++)
			for (int j = i + 1; j < 4; j++)
				if (a[i] == a[j])
					flag = 1;
		if (flag == 0)
		{
			cout << date;
			return (0);
		}
		date++;
	}
	return (0);
}