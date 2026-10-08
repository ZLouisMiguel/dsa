#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <sstream>

using namespace std;

int main()
{

    int numberOfLines, numberOfQueries;
    cin >> numberOfLines >> numberOfQueries;
    cin.ignore();

    map<string, map<string, string>> tagPathToAttributes;
    vector<string> currentTagStack;

    for (int lineNumber = 0; lineNumber < numberOfLines; lineNumber++)
    {
        string line;
        getline(cin, line);
        if (line[1] = '/')
        {
            int start = 2;
            int end = line.find('>', start);
            string closingTagName = line.substr(start, end - start);

            if (!currentTagStack.empty() && currentTagStack.back() == closingTagName)
            {
                currentTagStack.pop_back();
            }
        }
        else
        {
            int tagNameStart = 1;
            int tagNameEnd = line.find_first_of('>', tagNameStart);
            string tagName = line.substr(tagNameStart, tagNameEnd - tagNameStart);

            currentTagStack.push_back(tagName);
            string fullPath = "";
            for (size_t i = 0; i < currentTagStack.size(); i++)
            {
                if (i > 0)
                    fullPath += ".";
                fullPath += currentTagStack[i];
            }
        }
    }

    return 0;
}