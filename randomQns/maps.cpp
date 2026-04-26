#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string, int> studentMarks;
    int numberOfQueries, type, value;
    string studentName;

    cin>>numberOfQueries;
    while(numberOfQueries--) {
        cin>>type;
        if(type == 1) {
            cin>>studentName>>value;
            studentMarks[studentName] += value;
        }else if (type == 2) {
            cin>>studentName;
            studentMarks.erase(studentName);
        }else {
            cin>>studentName;
            cout<<studentMarks[studentName]<<"\n";
        }
    }
    
    return 0;
}
