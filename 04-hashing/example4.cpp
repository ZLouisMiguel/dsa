#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Student
{
    int id;
    string name;
    int age;
    string school;
};
class SchoolHashTable
{
private:
    static const int SIZE = 10;
    list<Student> table[SIZE];

    int hash(int id)
    {
        return id % SIZE;
    }

public:
    void insert(Student student)
    {
        int index = hash(student.id);
        table[index].push_back(student);
    }

    void search(int id)
    {
        int index = hash(id);
        for (Student s : table[index])
        {
            if (s.id == id)
            {
                cout << "Found student: "
                     << s.id << ", " << s.name << ", "
                     << s.age << ", " << s.school << "\n";
                return;
            }
        }
        cout << "Student with ID " << id << " not found.\n";
    }
    void display()
    {
        for (int i = 0; i < SIZE; ++i)
        {
            cout << "Bucket " << i << ": ";
            for (Student s : table[i])
            {
                cout << "(" << s.id << ", " << s.name << ", "
                     << s.age << ", " << s.school << ") ";
            }
            cout << "\n";
        }
    }
};

int main()
{
    SchoolHashTable ht;

    ht.insert({101, "Divine", 20, "RCA"});
    ht.insert({102, "Mugisha", 21, "RCA"});
    ht.insert({132, "Mugabo", 21, "RCA"});        // goes to same bucket as 102
    ht.insert({111, "Charlie", 19, "GS KAZUBA"}); // goes to same bucket as 101
    ht.insert({139, "Chance", 23, "RCA"});
    ht.insert({135, "Mike", 18, "RCA"});
    ht.insert({136, "Mikaela", 18, "RCA"});
    ht.display();

    ht.search(102);
    ht.search(999); // not found

    return 0;
}
