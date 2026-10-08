#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> myStock;

    myStock["apple"] = 100;
    myStock["banana"] = 200;
    myStock["cherry"] = 300;

    int qty = myStock["banana"];
    cout << "Value for key 'banana': " << qty << endl;

    myStock["banana"] = 250;
    qty = myStock["banana"];

    cout << "Updated value for key banana: " << qty << endl;
    myStock.erase("cherry");

    cout << "Key-value pairs in the map:" << endl;

    for (const auto &pair : myStock)
    {
        cout << pair.first << ":" << pair.second << endl;
    }

    return 0;
}