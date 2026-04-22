#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    char st[] = "hello";

    cout << str << endl;         // char array
    cout << strlen(str) << endl; // length

    cout << st << endl;
    cout << strlen(st) << endl;
    cout << st[3] << endl;

    return 0;
}