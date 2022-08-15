#include <iostream>

#define MAXN 25 //预定义

using namespace std;

const double PI = 3.14159;

int a[MAXN][MAXN];

int main()
{
    int n;
    cin >> n;
    // a[i][j] = a[i-1][j-1] + a[i-1][j]

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}