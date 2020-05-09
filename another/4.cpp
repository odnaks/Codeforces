#include <iostream>

int sum_env(int *sums, int *p, int x)
{
    if (sums[x] != -1){
        return(sums[x]);
    }
    else
    {
        if (p[x] == 0){
            return(0);
        }
        else {
            sums[x] = sum_env(sums, p, (p[x] - 1)) + 1;
            return(sums[x]);
        }
    }
}

int main()
{
	int n;
	std::cin >> n;
	int p[n];
    int sums[n];
    for (int i = 0; i < n; i++)
		sums[i] = -1;
	for (int i = 0; i < n; i++)
		std::cin >> p[i];
    for (int i = 0; i < n; i++)
		std::cout << sum_env(sums, p, i) << " ";
	return (0);
}
