#include <iostream>
using namespace std;

int main()
{
    int age;
    float height;
    char grade;
    string name;

    cout << "Enter your age, height, grade and name \n";

    cin >> age >> height >> grade >> name;

    cout << "You are " << age << " years old \n";
    cout << "You're this tall: " << height << endl;
    cout << "You're in this grade: " << grade << endl;
    cout << "You're name is: " << name << endl;

    return 0;
}