#include <iostream>

using namespace std;

int a[1500];

bool is_leap(int x)
{
    return x % 4 == 0 && x % 100 != 0 || x % 400 == 0;
}

int main()
{
    int x, y, cnt = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++)

        if (is_leap(i))
            a[cnt++] = i;

    cout << cnt << endl;

    for (int i = 0; i < cnt; i++)
        cout << a[i] << ' ';

    cout << endl;

    return 0;
}