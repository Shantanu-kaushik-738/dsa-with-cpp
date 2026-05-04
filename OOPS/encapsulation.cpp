#include <bits/stdc++.h>
using namespace std;

class Bank
{
private:
    int balance;

public:
    Bank()
    { // non-parameterized constructor
        balance = 0;
    }

    Bank(int x)
    { // parameterized constructor
        balance = x;
    }

    Bank(Bank &a)
    { // copy constructor
        balance = a.balance;
    }

    int getter()
    { // getter
        return balance;
    }

    void setter(int val)
    { // setter
        balance = val;
    }
};

int main()
{
    Bank a;
    a.setter(101);
    
    cout << a.getter() << endl;

    return 0;
}
