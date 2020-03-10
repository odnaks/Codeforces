//02.02.19 @odnaks
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;

	int sc = 0;
	for(int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'A')
			sc++;
		else
			sc--;
	}
	if (sc == 0)
		cout << "Friendship";
	else if (sc > 0)
		cout << "Anton";
	else
		cout << "Danik";
	return (0);
}