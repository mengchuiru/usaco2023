#include <iostream>
#include <cstring>

using namespace std;

char mp[110][110];

int main()
{
    int n, m;
    cin >> n >> m;

    memset(mp, '?', sizeof(mp));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (mp[i][j] != '*')
            {
                int cnt = 0;
                if (mp[i - 1][j - 1] == '*')
                    cnt++;
                if (mp[i - 1][j] == '*')
                    cnt++;
                if (mp[i - 1][j + 1] == '*')
                    cnt++;
                if (mp[i][j - 1] == '*')
                    cnt++;
                if (mp[i][j + 1] == '*')
                    cnt++;
                if (mp[i + 1][j - 1] == '*')
                    cnt++;
                if (mp[i + 1][j] == '*')
                    cnt++;
                if (mp[i + 1][j + 1] == '*')
                    cnt++;
                mp[i][j] = cnt + '0';
            }
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << mp[i][j];
        cout << endl;
    }

    return 0;
}
