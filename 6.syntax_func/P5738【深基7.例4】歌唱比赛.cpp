#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int a[30];

double avr(int m)
{
    double x = 0;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);

    for (int i = 1; i < m - 1; i++)
        x += a[i];

    return x / (m - 2);
}

int main()
{
    int n, m;
    double ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ans = max(avr(m), ans);
    }
    printf("%.2lf\n", ans);
    return 0;
}

/*
int a[110][25];

int main()
{
    int n, m;
    double ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int mx = 0, mn = 10;
        a[i][m] = 0;
        for (int j = 0; j < m; j++)
        {
            a[i][m] += a[i][j];
            mx = max(mx, a[i][j]);
            mn = min(mn, a[i][j]);
        }
        double pingjun = 1.0 * (a[i][m] - mn - mx) / (m - 2);

        ans = max(pingjun, ans);
    }

    printf("%.2lf\n", ans);

    return 0;
}
*/