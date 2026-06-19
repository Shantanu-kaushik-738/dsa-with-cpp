#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    int fibonacci(int n)
    {
        if (n == 0 || n == 1)
        {
            return n;
        }
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main()
{
    int n;
    cin >> n;

    solution sol;
    cout << sol.fibonacci(n) << endl;

    return 0;
}