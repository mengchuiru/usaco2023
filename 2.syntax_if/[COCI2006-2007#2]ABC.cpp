#include <iostream>

using namespace std;
int a[5], tmp;
char c[5];

int main()
{

    cin >> a[0] >> a[1] >> a[2];
    cin >> c[0] >> c[1] >> c[2];
    if (a[0] > a[1])
    {
        tmp = a[0];
        a[0] = a[1];
        a[1] = tmp;
    }

    if (a[0] > a[2])
    {
        tmp = a[0];
        a[0] = a[2];
        a[2] = tmp;
    }
    if (a[1] > a[2])
    {
        tmp = a[1];
        a[1] = a[2];
        a[2] = tmp;
    }
    cout << a[c[0] - 'A'] << ' ' << a[c[1] - 'A'] << ' ' << a[c[2] - 'A'] << endl;

    return 0;
}

/*#include <iostream>

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
}*/