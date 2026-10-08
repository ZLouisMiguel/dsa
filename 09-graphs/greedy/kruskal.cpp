#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
    int origin;
    int destination;
    int weight;
};

bool compareByWeight(Edge a, Edge b)
{
    return a.weight < b.weight;
}

vector<int> parent;

int findParent(int node)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findParent(parent[node]);
}

void unite(int nodeA, int nodeB)
{
    nodeA = findParent(nodeA);
    nodeB = findParent(nodeB);
    parent[nodeA] = nodeB;
}

int main()
{
    vector<Edge> edges = {
        {0, 1, 1},
        {0, 3, 4},
        {1, 2, 2},
        {2, 3, 3},
        {1, 3, 5}};

    sort(edges.begin(), edges.end(), compareByWeight);

    parent.resize(4);
    for (int i = 0; i < 4; i++)
        parent[i] = i;

    vector<Edge> mst;
    int totalCost = 0;

    for (Edge edge : edges)
    {
        if (findParent(edge.origin) != findParent(edge.destination))
        {
            unite(edge.origin, edge.destination);
            totalCost += edge.weight;
            cout << edge.origin << " - " << edge.destination << " : " << edge.weight << endl;
            mst.push_back(edge);
        }
    }

    cout << "Total MST cost: " << totalCost << endl;
}