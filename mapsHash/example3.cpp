#include <iostream>
#include <list>
#include <vector>
#include <string>
using namespace std;

class HashTable
{
private:
    // Number of buckets
    static const int HASH_GROUPS = 10;
    vector<list<pair<int, string>>> table;

public:
    HashTable()
    {
        table.resize(HASH_GROUPS);
    }

    int hashFunction(int key)
    {
        return key % HASH_GROUPS;
    }
    void insert(int key, const string &value)
    {
        int hashValue = hashFunction(key);
        auto &cell = table[hashValue];
        for (auto &pair : cell)
        {
            if (pair.first == key)
            {
                pair.second = value;
                return;
            }
        }
        cell.emplace_back(key, value);
    }
    void remove(int key)
    {
        int hashValue = hashFunction(key);
        auto &cell = table[hashValue];
        for (auto it = cell.begin(); it != cell.end(); ++it)
        {
            if (it->first == key)
            {
                cell.erase(it);
                return;
            }
        }
    }

    string search(int key)
    {
        int hashValue = hashFunction(key);
        auto &cell = table[hashValue];
        for (const auto &pair : cell)
        {
            if (pair.first == key)
            {
                return pair.second;
            }
        }
        return "Key not found";
    }

    void display()
    {
        for (int i = 0; i < HASH_GROUPS; ++i)
        {
            cout << "Bucket " << i << ": ";
            for (const auto &pair : table[i])
            {
                cout << "[" << pair.first << " : " << pair.second << "] ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    HashTable ht;

    ht.insert(905, "John");
    ht.insert(201, "Jane");
    ht.insert(332, "Tom");
    ht.insert(32, "Ange");
    ht.insert(124, "Mike");
    ht.insert(154, "Michael");
    ht.insert(127, "Chael");
    ht.insert(107, "Alice");

    ht.display();

    cout << "Searching for key 201: " << ht.search(201) << "\n";

    ht.remove(201);
    cout << "After removing key 201:\n";
    ht.display();

    return 0;
}
