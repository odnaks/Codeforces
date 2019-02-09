//09.02.19 @odnaks
#include <iostream>

using namespace std;

int main()
{
    string a;
    string b;
    string c;

    cin >> a >> b >> c;
    if (a.size() + b.size() != c.size())
    {
        cout << "NO";
        return 0;
    }
    int al[26];
    for (int i = 0; i < 26; i++)
        al[i] = 0;
    for (int i = 0; i < c.size(); i++)
        al[c[i] - 65]++;
    for (int i = 0; i < a.size(); i++)
        al[a[i] - 65]--;
    for (int i = 0; i < b.size(); i++)
        al[b[i] - 65]--;
    for (int i = 0; i < 26; i++)
        if (al[i] != 0)
        {
            cout << "NO";
            return 0; 
        }
    cout << "YES";
    return (0);
}