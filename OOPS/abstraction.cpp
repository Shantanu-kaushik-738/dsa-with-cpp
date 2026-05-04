#include <bits/stdc++.h>
using namespace std;

class Shape
{                            // since here is a pure virtual function => this is a abstract class
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle" << endl;
    }
};

int main()
{
    Circle c1;
    c1.draw();

    return 0;
}