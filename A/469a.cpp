//02.02.19 @odnaks

#include <iostream>

using namespace std;

int main()
{
	int n, p, q;
	cin >> n >> p;

	int str1[p];

	int str[n + 1];
	int k = 0;
	for (int i = 0; i < n + 1; i++)
		str[i] = 0;
	for (int i = 0; i < p; i++)
	{
		cin >> str1[i];
		if (str[str1[i] - 1] == 0)
			k++;
		str[str1[i] - 1] = 1;
	}
	cin >> q;
	int str2[q];
	for (int i = 0; i < q; i++)
	{
		cin >> str2[i];
		if (str[str2[i] - 1] == 0)
			k++;
		str[str2[i] - 1] = 1;
	}
	if (k != n)
	{
		cout << "Oh, my keyboard!";
		return (0);
	}
	cout << "I become the guy.";
	return (0);
}