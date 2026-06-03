#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main()
{
    unordered_map<int, string> um = {{6, "Rwanda"}, {10, "Coding"}, {3, "Academy"}, {5, "C++"}, {1, "Hello"}};
    map<int, string> num = {{6, "Rwanda"}, {10, "Coding"}, {3, "Academy"}, {5, "C++"}, {1, "Hello"}};

    for (auto i : um)
        cout << i.first << ":" << i.second << endl;

    cout << "\n";

    for (auto i : num)
        cout << i.first << ":" << i.second << endl;

    return 0;
}