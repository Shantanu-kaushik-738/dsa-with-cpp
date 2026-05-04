#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int y;

    void incy()
    {
        y++;
    }
};

void fnx()
{
    static int x = 0;
    cout << x << endl;
    x++;
}

int main()
{
    fnx();
    fnx();
    fnx();

    A a;
    a.y = 0;
    cout << a.y << endl;
    a.incy();
    cout << a.y << endl;

    return 0;
}