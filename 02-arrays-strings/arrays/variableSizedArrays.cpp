#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<vector<int>> a;
    vector<pair<int, int>> queries;

    int numberOfArrays, numberOfQueries;

    cin >> numberOfArrays >> numberOfQueries;

    a.resize(numberOfArrays);

    int count = 0, k, val;

    while (count < numberOfArrays)
    {
        cin >> k;
        a[count] = vector<int>(k, 0);

        for (int i = 0; i < k; i++)
        {
            cin >> val;
            a[count][i] = val;
        }
        count++;
    }

    count = 0;
    int i, j;
    while (count < numberOfQueries)
    {
        cin >> i >> j;
        queries.push_back({i, j});
        count++;
    }

    for (int i = 0; i < queries.size(); i++)
    {
        cout << a[queries[i].first][queries[i].second] << "\n";
    }

    return 0;
}
