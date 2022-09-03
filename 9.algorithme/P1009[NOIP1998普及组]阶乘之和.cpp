#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 1010;

struct Bignum
{
    int len, a[MAXN];

    Bignum(string x = "0")
    {
        memset(a, 0, sizeof(a));
        len = x.size();
        for (int i = 1; i <= len; i++)
            a[i] = x[len - i] - '0';
    }

    // 规整
    void flat(int l)
    {
        len = l;
        for (int i = 1; i <= len; i++)
            a[i + 1] += a[i] / 10, a[i] %= 10;
        while (len > 1 && !a[len])
            len--;
    }

    // 加法
    Bignum operator+(const Bignum &x)
    {
        Bignum c;
        c.len = max(len, x.len);
        for (int i = 1; i <= c.len; i++)
            c.a[i] = a[i] + x.a[i];
        c.flat(c.len + 2);
        return c;
    }

    // 乘法
    Bignum operator*(const Bignum &x)
    {
        Bignum c;

        for (int i = 1; i <= len; i++)
            for (int j = 1; j <= x.len; j++)
                c.a[i + j - 1] += a[i] * x.a[j];

        c.flat(len + x.len);
        return c;
    }

    // 输出
    void print()
    {
        for (int i = 1; i <= len; i++)
            cout << a[len + 1 - i];
    }
};

int main()
{
    int n;
    cin >> n;
    Bignum s("0"), ss("1");

    for (int i = 1; i <= n; i++)
    {
        Bignum ss("1");

        for (int j = 1; j <= i; j++)
        {
            Bignum jj(to_string(j));
            ss = ss * jj;
        }

        s = s + ss;
    }

    s.print();
    cout << endl;
    return 0;
}
