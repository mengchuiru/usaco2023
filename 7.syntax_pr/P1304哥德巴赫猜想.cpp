#include <iostream>

using namespace std;
const int N = 10010;
int p[N], cnt = 0;
bool st[N];

void setp(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            p[cnt++] = i;
        for (int j = 0; p[j] <= n / i; j++)
        {
            st[i * p[j]] = true;
            if (i % p[j] == 0)
                break;
        }
    }
}

bool isp(int n)
{
    for (int i = 0; i < cnt; i++)
    {
        if (n == p[i])
            return true;
        if (p[i] > n)
            return false;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    setp(n);
    for (int i = 4; i <= n; i += 2)
    {
        for (int j = 0; p[j] <= i; j++)
        {
            if (isp(i - p[j]))
            {
                cout << i << '=' << p[j] << '+' << i - p[j] << endl;
                break;
            }
        }
    }

    return 0;
}