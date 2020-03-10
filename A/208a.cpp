//02.02.19 @odnaks
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
	int i;

    cin >> str;
    for (i = 0; i < str.length(); i++)
    {
        if ((i < str.length() - 2) && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
				i += 2;
		else
			break;
	}
	for (int j = i; j < str.length(); j++)
	{
		if ((j < str.length() - 2) && str[j] == 'W' && str[j + 1] == 'U' && str[j + 2] == 'B')
		{
			j += 2;
			cout << " ";
		}
		else
			cout << str[j];
	}
    return (0);
}