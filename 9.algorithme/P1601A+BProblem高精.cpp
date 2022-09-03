#include <iostream>
#include <cstring>

using namespace std;

const int MAXN = 4010;

struct Bignum
{
    int len, a[MAXN];

    // 初始化
    Bignum(string s = "0")
    {
        memset(a, 0, sizeof(a));
        len = s.size();
        for (int i = 1; i <= len; i++)
            a[i] = s[len - i] - '0';
    }

    // 规整函数
    void flat(int l)
    {
        len = l;
        for (int i = 1; i <= len; i++)
        {
            a[i + 1] += a[i] / 10;
            a[i] %= 10;
        }
        while (!a[len] && len > 1)
            len--;
    }

    //加法
    Bignum operator+(const Bignum &x)
    {
        Bignum c;
        c.len = max(len, x.len);
        for (int i = 1; i <= c.len; i++)
            c.a[i] = a[i] + x.a[i];
        c.flat(c.len + 2);
        return c;
    }

    //乘法
    Bignum operator*(const Bignum &x)
    {
        Bignum c;
        for (int i = 1; i <= len; i++)
            for (int j = 1; j <= x.len; j++)
                c.a[i + j - 1] += a[i] * x.a[j];
        c.flat(len + x.len);
        return c;
    }

    //减法
    Bignum operator-(const Bignum &x)
    {
        Bignum c;
        for (int i = 1; i <= len; i++)
        {
            if (a[i] < x.a[i])
            {
                a[i] += 10;
                a[i + 1]--;
            }
            c.a[i] = a[i] - x.a[i];
        }
        c.flat(len);
        return c;
    }

    //输出
    void print()
    {
        for (int i = 1; i <= len; i++)
            cout << a[len + 1 - i];
    }
};

int main()
{
    string a, b;
    cin >> a >> b;

    Bignum n1(a);
    Bignum n2(b);

    Bignum n3 = n1 * n2;

    n3.print();
    cout << endl;

    return 0;
}
