#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cout << setiosflags(ios::uppercase);

    while (T--)
    {
        double A, B, C;
        cin >> A >> B >> C;

        long long a_int = (long long)A;
        if (a_int < 0)
        {
            cout << "-";
            a_int = -a_int;
        }
        cout << "0x" << hex << nouppercase << a_int << dec << endl;
        cout << uppercase;
        cout << setfill('_') << right << setw(15) << showpos << fixed << setprecision(2) << B << endl;
        cout << noshowpos << scientific << setprecision(9) << C << endl;
    }

    return 0;
}
