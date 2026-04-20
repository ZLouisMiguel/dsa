#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> a;

    int numberOfArrays, numberOfQueries;
    cin >> numberOfArrays >> numberOfQueries;

    a.resize(numberOfArrays);

    for (int i = 0; i < numberOfArrays; i++)
    {
        int k;
        cin >> k;
        a[i].resize(k);

        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int q = 0; q < numberOfQueries; q++)
    {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << "\n";
    }

    return 0;
}
