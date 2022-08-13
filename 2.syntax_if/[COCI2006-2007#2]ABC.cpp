#include <iostream>

using namespace std;

int main()
{
    int a, b, c, tmp;
    cin >> a >> b >> c;

    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }

    char x;
    cin >> x;
    if (x == 'A')
        cout << a << ' ';
    else if (x == 'B')
        cout << b << ' ';
    else
        cout << c << ' ';

    cin >> x;
    if (x == 'A')
        cout << a << ' ';
    else if (x == 'B')
        cout << b << ' ';
    else
        cout << c << ' ';

    cin >> x;
    if (x == 'A')
        cout << a << ' ';
    else if (x == 'B')
        cout << b << ' ';
    else
        cout << c << ' ';
    return 0;
}