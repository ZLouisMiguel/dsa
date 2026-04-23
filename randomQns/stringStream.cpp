#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> nums;
    stringstream ss(str), ss2(str);
    char ch;
    int currVal, commaCount = 0;

    while (ss2 >> ch)
    {
        if (ch == ',')
            commaCount++;
    }

    for (int i = 0; i < commaCount + 1; i++)
    {
        ss >> currVal;
        ss >> ch;
        nums.push_back(currVal);
    }

    return nums;
};

int main()
{
    string str = "23,4,56";
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}