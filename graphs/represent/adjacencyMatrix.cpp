#include <iostream>
#include <vector>

using namespace std;

class AdjacencyMatrix
{
private:
    vector<vector<int>> matrix;

public:
    AdjacencyMatrix(int size)
    {
        matrix = vector(size, vector(size, 0));
    }

    void displayGraph()
    {
        for (auto v : matrix)
        {
            for (auto el : v)
            {
                cout << el << " ";
            }
            cout << "\n";
        }
    }

    void addEdge(int from, int to, int weight)
    {
        if (from < 0 || from > matrix.size() || to > matrix.size() || to < 0)
        {
            cout << "Invalid graph coordinates \n";
            return;
        }

        matrix[from][to] += weight;
    }
};

int main()
{
    return 0;
}