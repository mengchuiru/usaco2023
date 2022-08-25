#include <iostream>
#include <string>
using namespace std;

const int N = 100000000;
int p[N], cnt = 0;
bool st[N];

void isp(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (!st[i])
            p[cnt++] = i;
        for (int j = 0; p[j] <= n / i; j++)
        {
            st[p[j] * i] = true;
            if (i % p[j] == 0)
                break;
        }
    }
}

bool ish(int n)
{
    string s;
    s = to_string(n);
    for (int i = 0; i <= s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    isp(b);

    for (int i = 0; i < cnt; i++)
    {
        if (p[i] >= a && ish(p[i]))
            cout << p[i] << endl;
    }

    return 0;
}