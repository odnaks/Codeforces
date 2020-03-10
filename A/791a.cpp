//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int k = 0;

    while(1)
    {
        k++;
        a *= 3;
        b *= 2;
        if (a > b)
        {
            cout << k;
            return (0);
        }
    }
    return (0);
}