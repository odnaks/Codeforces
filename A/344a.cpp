//02.02.19 @odnaks
#include <iostream>

using namespace std;

int	main()
{
	int	n;
	cin >> n;
	string buff;
	string str_c;
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> str_c;
		if (buff != str_c)
			k++;
		buff = str_c;
	}
	cout << k;
	return (0);
}
