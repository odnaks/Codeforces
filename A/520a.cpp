//07.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int	n;
	int c[26];
	for (int i = 0; i < 26; i++)
		c[i] = 0;
	cin >> n;
	string s;
	cin >> s;
	if (n > 25)
		for (int i = 0; i < n; i++)
		{
			if (s[i] >= 65 && s[i] <= 90)
				c[s[i] - 65] = 1;
			else if (s[i] >= 97 && s[i] <= 122)
				c[s[i] - 97] = 1;
		}
	else
	{
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < 26; i++)
		if (c[i] == 0)
		{
			cout << "NO";
			return 0;
		}
	cout << "YES";
	return (0);
}