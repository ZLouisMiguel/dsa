#include <iostream>
using namespace std;

class Car
{
public:
    string color;
    string model;

    void startEngine()
    {
        cout << model << " engine started" << endl;
    }

    void stopEngine()
    {
        cout << model << " engine stopped" << endl;
    }
};

int main()
{
    Car myCar;
    myCar.color = "Red";
    myCar.model = "Toyota";

    cout << "My Car Color: " << myCar.color << "\n";
    myCar.startEngine();
    myCar.stopEngine();

    return 0;
}