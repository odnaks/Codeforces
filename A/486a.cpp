//02.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int f = 0;
    if (n % 2 == 1)
        f = -(n + 1) / 2;
    else
        f = n / 2;
    cout << f;
    return (0);
}