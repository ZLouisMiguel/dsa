#include <iostream>
#include <vector>

using namespace std;

vector<int> hourGlassSums;
int hourGlassSum(vector<vector<int>> arr)
{
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];
            hourGlassSums.push_back(sum);
            max = (sum > max) ? sum : max;
        }
    }

    return max;
}

void printSums(vector<int> sums)
{

    int newLineCount = 0;
    for (int i = 0; i < sums.size(); i++)
    {
        cout << sums[i];
        newLineCount++;
        if (i != sums.size() - 1)
            cout << ",";
        if (newLineCount % 4 == 0)
            cout << "\n";
    }

    cout << "\n";
}

int main()
{
    vector<vector<int>> arr = {
        {-9, -9, -9, 1, 1, 1},
        {0, -9, 0, 4, 3, 2},
        {-9, -9, -9, 1, 2, 3},
        {0, 0, 8, 6, 6, 0},
        {0, 0, 0, -2, 0, 0},
        {0, 0, 1, 2, 4, 0}};

    cout << hourGlassSum(arr) << "\n";

    printSums(hourGlassSums);

    return 0;
}