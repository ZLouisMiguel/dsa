#include <iostream>
#include <vector>

using namespace std;

vector<int> dynamicArray(int n, vector<vector<int>> queries)
{
    vector<int> answers;
    vector<vector<int>> arr(n);
    int lastAnswer = 0;

    for (auto q : queries)
    {
        int type = q[0], x = q[1], y = q[2];
        int idx = (x ^ lastAnswer) % n;
        if (type == 1)
        {
            arr[idx].push_back(y);
        }
        else
        {
            int seqSize = arr[idx].size();
            int value = arr[idx][y % seqSize];
            lastAnswer = value;
            answers.push_back(lastAnswer);
        }
    }

    return answers;
}

int main()
{
}