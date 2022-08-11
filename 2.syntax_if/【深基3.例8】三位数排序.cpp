#include <iostream>
using namespace std;

int main()
{
    int a, b, c, tmp;
    cin >> a >> b >> c;

    // 交换两个数的值
    // tmp = a;
    // a = b;
    // b = tmp;
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

    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}