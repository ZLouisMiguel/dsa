#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> nums;
    int numberOfQueries, type, value;

    cin >> numberOfQueries;

    while (numberOfQueries--)
    {
        cin >> type >> value;
        if (type == 1)
        {
            nums.insert(value);
        }
        else if (type == 2)
        {
            nums.erase(value);
        }
        else
        {
            set<int>::iterator itr = nums.find(value);
            if (itr != nums.end())
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}