#include <iostream>

using namespace std;

bool a[1050][1050];

void f(int x, int y, int n)
{
    if (n == 0)
    {
        a[x][y] = true;
        return;
    }
    int l = 1 << (n - 1);
    f(x, y + l, n - 1);
    f(x + l, y, n - 1);
    f(x + l, y + l, n - 1);
}


int main()
{
    int n;
    cin >> n;
    int ll = 1 << n;
    f(0, 0, n);

    for (int i = 0; i < ll; i++)
    {
        for (int j = 0; j < ll; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
