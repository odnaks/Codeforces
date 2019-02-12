//12.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int min = 240 - k;
	int	i = 0;
	int sum = 0;
	while (sum < min && i <= n)
	{
		i++;
		sum += 5 * i;
	}
	if (sum == min)
		cout << i;
	else
		cout << i - 1;
	
	return (0);
}