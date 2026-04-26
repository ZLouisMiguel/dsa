#include <iostream>

using namespace std;

class Rectangle
{

public:
    int height, width;
    virtual void display() 
    {
        cout << width << " " << height;
    }
};

class RectangleArea : public Rectangle
{
public:
    void display()
    {
        cout << width * height << "\n";
    }

    void read_input() {
        cin>>width>>height;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}