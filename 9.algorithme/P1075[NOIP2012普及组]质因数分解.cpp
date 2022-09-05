#include <iostream>

using namespace std;

int p[555000], cnt;
bool st[55000];

void setp(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            p[cnt++] = i;
        for (int j = 0; p[j] <= n/i; j++)
        {
            st[p[j] * i] = true;

            if (n % p[j] == 0)
            {
                cout << n / p[j] << endl;
                return;
            }
            if (i % p[j] == 0)
                break;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    setp(n);
    return 0;
}
