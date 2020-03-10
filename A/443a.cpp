//04.02.19 @odnaks
#include <iostream>

using namespace std;

int	main()
{
	char	str[1001];
	int		alp[27];
	for (int i = 0; i < 27; i++)
		alp[i] = 0;
	cin >> str[0];
	int k = 0;
	int j = 0;
	while (str[j++] != '}')
	{
		cin >> str[j];
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			if (alp[str[j] - 97] == 0)
				k++;
			alp[str[j] - 97] = 1;
		}
	}
	cout << k;
	return (0);
}