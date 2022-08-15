#include <iostream>

using namespace std;

const int MAXN = 1010;

int a[MAXN][5];

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        a[i][3] = a[i][0] + a[i][1] + a[i][2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][0] - a[j][0] > 5 || a[i][0] - a[j][0] < -5)
                continue;
            if (a[i][1] - a[j][1] > 5 || a[i][1] - a[j][1] < -5)
                continue;
            if (a[i][2] - a[j][2] > 5 || a[i][2] - a[j][2] < -5)
                continue;
            if (a[i][3] - a[j][3] > 10 || a[i][3] - a[j][3] < -10)
                continue;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}