//02.02.19 @odnaks
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
	string str1, str2;
	cin >> str1 >> str2;
	int str[101];
	int a, b;
	for (int i = 0; i < str1.length(); i++)
	{
		if (str1[i] == '1')
			a = 1;
		else
			a = 0;
		if (str2[i] == '1')
			b = 1;
		else
			b = 0;
		str[i] = (a + b) % 2;
	}
	for (int i = 0; i < str1.length(); i++)
		cout << str[i];
	return (0);
}
