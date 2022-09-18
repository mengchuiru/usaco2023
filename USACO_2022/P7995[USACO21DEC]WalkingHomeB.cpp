#include <iostream>
#include <cstring>

using namespace std;

char a[60][60];

int T, N, K;

int c_up(int x, int y)
{
    int count = 0;
    for (int i = 0; i <= x; i++)
        if (a[i][y] == 'H')
            count++;
    return count;
}

int c_down(int x, int y)
{
    int count = 0;
    for (int i = x; i < N; i++)
        if (a[i][y] == 'H')
            count++;
    return count;
}

int c_left(int x, int y)
{
    int count = 0;
    for (int i = 0; i <= y; i++)
        if (a[x][i] == 'H')
            count++;
    return count;
}

int c_right(int x, int y)
{
    int count = 0;
    for (int i = y; i < N; i++)
        if (a[x][i] == 'H')
            count++;
    return count;
}

int main()
{

    cin >> T;
    for (int k = 0; k < T; k++)
    {
        cin >> N >> K;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> a[i][j];

        int ans = 0;

        if (K >= 1)
        {
            if (c_left(0, N - 1) + c_down(0, N - 1) == 0)
                ans++;
            if (c_up(N - 1, 0) + c_right(N - 1, 0) == 0)
                ans++;
        }


        if (K >= 2)
        {
            for (int i = 1; i < N - 1; i++)
                if (c_up(i, 0) + c_right(i, 0) + c_down(i, N - 1) == 0)
                    ans++;
            for (int j = 1; j < N - 1; j++)
                if (c_left(0, j) + c_down(0, j) + c_right(N - 1, j) == 0)
                    ans++;
        }


        if (K >= 3)
        {
            for (int i = 1; i < N - 1; i++)
                for (int j = 1; j < N - 1; j++)
                {
                    if (c_up(i, j) + c_right(i, j) + c_left(0, j) + c_down(i, N - 1) == 0)
                        ans++;
                }
            for (int i = 1; i < N - 1; i++)
                for (int j = 1; j < N - 1; j++)
                {
                    if (c_down(i, j) + c_left(i, j) + c_up(i, 0) + c_right(N - 1, j) == 0)
                        ans++;
                }
        }
        // for (int i = 1; i < N - 1; i++)
        // {
        //     for (int j = 1; j < N - 1; j++)
        //         cout << c_up(i, j) << c_down(i, j) << c_left(i, j) << c_right(i, j) << ' ';
        //     cout << endl;
        // }

        cout << ans << endl;
    }

    return 0;
}
