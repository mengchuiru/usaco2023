# [点击转到视频 ↓ ](#video)

# 作业链接
[模拟题](https://www.luogu.com.cn/contest/82071)

P1200,P1201,
P1202,P1203,P3864,P1204,P1205,P1206,P1207,P1208,P1209,P1211,P1444,P3650,P2693,P1214	,1215,1216,P1217,P1218

#  知识点

- 模拟
- 高精度
- 位运算

#### 模板 快速排序
```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int a[100005];

void qsort(int q[], int l, int r)
{
    if (l >= r)
        return;

    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }
    qsort(q, l, j);
    qsort(q, j + 1, r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}

```



#### 例题 大数运算  加 减 乘 模板 （高精度）
```cpp
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

    Bignum n3 = n1 - n2;

    n3.print();
    cout << endl;

    return 0;
}

```





# video

- 视频 第10课

<video src="https://www.imcr.top/Vidies/10th.mp4" width="800px" height="600px" controls="controls"></video>

[下载第10课视频](https://www.imcr.top/Vidies/10th.mp4)





---
