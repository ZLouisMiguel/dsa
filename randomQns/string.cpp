#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "abcd", b = "ef", aPrime = "", bPrime = "";
    // cin >> a >> b;

    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
        {
            aPrime += b[i];
            continue;
        }

        aPrime += a[i];
    }

    for (int i = 0; i < b.size(); i++)
    {
        if (i == 0)
        {
            bPrime += a[i];
            continue;
        }

        bPrime += b[i];
    }

    cout << a.size() << " " << b.size() << "\n";
    cout << a + b << "\n";
    cout << aPrime << " " << bPrime;
    return 0;
}