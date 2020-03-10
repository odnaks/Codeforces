//30.01.19 @odnaks
#include <iostream>
#include <string.h>

using namespace std;

int	main()
{
	char a[200];
	char b[200];

	cin >> a >> b;
	if (strlen(a) != strlen(b))
	{
		cout << "NO";
		return (0);
	}
	int len = strlen(a) - 1;
	int i = 0;
	while (i < strlen(a))
	{
		if (a[i] != b[len])
		{
			cout << "NO";
			return (0);
		}
		i++;
		len--;
	}
	cout << "YES";
	return 0;
}