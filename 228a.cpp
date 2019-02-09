//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	long int a[4];
	int k = 0;
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	int b[4];
	for (int i = 0; i < 4; i++)
		b[i] = 0;
	for(int i = 0; i < 4; i++)
		for (int j = i + 1; j < 4; j++)
			if (a[i] == a[j])
				if (b[j] == 0)
				{
					b[i] = 1;
					b[j] = 1;
					k++;
				}
	cout << k;
	return 0;
}