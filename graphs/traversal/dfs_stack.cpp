#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<vector<int>> &matrix, int start, vector<bool> &visited)
{
    stack<int> st;
    st.push(start);

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();

        if (!visited[curr])
        {
            visited[curr] = true;
            cout << curr << " ";

            for (int next = matrix.size() - 1; next >= 0; next--)
            {
                if (matrix[curr][next] == 1 && !visited[next])
                {
                    st.push(next);
                }
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {
        /**/
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 0, 0, 1, 0},
        {0, 1, 1, 0, 1},
        {0, 0, 0, 1, 0}};

    /*
    graph looks like

        0
       / \
      1   2
      \   /
        3
        |
        4

        */

    int vertices = matrix.size();
    vector<bool> visited(vertices, false);

    cout << "DFS Traversal: ";

    // Start DFS from vertex 0
    dfs(matrix, 0, visited);

    return 0;
}