//12.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str[n];
	string arh[n];
	int arh_k[100004] = {0};
	int k = 0;
	int flag;
	for (int i = 0; i < n; i++)
	{
		flag = 0;
		cin >> str[i];
		for (int j = 0; j < k; j++)
			if (str[i] == arh[j])
			{
				cout << str[i] << ++arh_k[j] << endl;
				flag = 1;
			}
		if (flag == 0)
		{
			cout << "OK" << endl;
			arh[k] = str[i];
			k++;
		}
	}
	return (0);
}