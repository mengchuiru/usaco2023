#include <iostream>

using namespace std;

char a[11][11], aa[11][11], b[11][11];
int n;

bool check()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != b[i][j])
                return false;
    return true;
}

void turn90()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            aa[j][n - 1 - i] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = aa[i][j];
}

void fl()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            aa[i][n - 1 - j] = a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = aa[i][j];
}

int main()
{

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];
    // 90
    turn90();
    if (check())
    {
        cout << 1 << endl;
        return 0;
    }
    // 180
    turn90();
    if (check())
    {
        cout << 2 << endl;
        return 0;
    }
    // 270
    turn90();
    if (check())
    {
        cout << 3 << endl;
        return 0;
    }
    turn90(); // 0

    // 反射
    fl();
    if (check())
    {
        cout << 4 << endl;
        return 0;
    }
    turn90();
    if (check())
    {
        cout << 5 << endl;
        return 0;
    }
    turn90();
    if (check())
    {
        cout << 5 << endl;
        return 0;
    }
    turn90();
    if (check())
    {
        cout << 5 << endl;
        return 0;
    }

    //不改变
    turn90();
    fl();
    if (check())
    {
        cout << 6 << endl;
        return 0;
    }

    cout << 7 << endl;
    return 0;
}
