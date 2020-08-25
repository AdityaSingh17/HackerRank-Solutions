// Rectangle Area
// Problem Link: https://www.hackerrank.com/challenges/rectangle-area/problem

#include <iostream>

using namespace std;

// Create classes Rectangle and RectangleArea
class Rectangle
{
public:
    int width, height;

    void display()
    {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }

    void display()
    {
        cout << width * height;
    }
};

int main()
{
    RectangleArea r_area;
    r_area.read_input();         // Read parameters.
    r_area.Rectangle::display(); // Display width and height.
    r_area.display();            // Display width and height.
    return 0;
}