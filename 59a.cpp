//02.02.19 @odnaks
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int c_b = 0;
	int c_s = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			c_s++;
		else
			c_b++;
	}
	if (c_b > c_s)
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			cout << str[i];
		}
	else
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			cout << str[i];
		}
	return (0);
}