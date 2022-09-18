#include <iostream>

using namespace std;

char a[5][5], b[5][5];

int main()
{
    int green = 0, yellow = 0;
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> b[i][j];
    //找绿色
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
        {
            if (a[i][j] == b[i][j])
            {
                green++;
                a[i][j] = '*';
                b[i][j] = '*';
            }
        }
    //找黄色
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
        {
            if (a[i][j] != '*')
            {
                for (int ii = 1; ii <= 3; ii++)
                    for (int jj = 1; jj <= 3; jj++)
                        if (a[i][j] == b[ii][jj])
                        {
                            yellow++;
                            a[i][j] = '#';
                            b[ii][jj] = '*';
                        }
            }
        }

    cout << green << endl;
    cout << yellow << endl;

    return 0;
}
