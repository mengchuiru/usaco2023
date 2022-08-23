# [点击转到视频 ↓ ](#video)

# [作业链接](https://www.luogu.com.cn/training/214777#problems)
P5735,P5736,P5737,P5738,P5739,P5461,P5740,P5741,P5742,P1075,P1304,P1217,P2415,P5743,P5744

#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/6.syntax_func/func.png)

# 例题

#### P5735	【深基7.例1】距离函数

```cpp
#include <iostream>
#include <cmath>

using namespace std;

double fun(double x1, double y1, double x2, double y2)
{
    double d;
    d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    d = sqrt(d);
    return d;
}

int main()
{
    double x1, y1, x2, y2, x3, y3, l = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    l += fun(x1, y1, x2, y2);
    l += fun(x2, y2, x3, y3);
    l += fun(x3, y3, x1, y1);
    printf("%.2lf\n", l);

    return 0;
}
```
#### P5736	【深基7.例2】质数筛
```cpp
#include <iostream>

using namespace std;

int a[110];

// 判断质数
bool is_prime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (is_prime(a[i]))
            cout << a[i] << ' ';

    return 0;
}
```

#### P5737	【深基7.例3】闰年展示
```cpp
#include <iostream>

using namespace std;

int a[1500];

bool is_leap(int x)
{
    return x % 4 == 0 && x % 100 != 0 || x % 400 == 0;
}

int main()
{
    int x, y, cnt = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++)

        if (is_leap(i))
            a[cnt++] = i;

    cout << cnt << endl;

    for (int i = 0; i < cnt; i++)
        cout << a[i] << ' ';

    cout << endl;

    return 0;
}
```

#### P5739 【深基7.例7】计算阶乘
```cpp
#include <iostream>

using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}
```
#### P5738 【深基7.例4】歌唱比赛
```cpp
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int a[110][25];

int main()
{
    int n, m;
    double ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int mx = 0, mn = 10;
        a[i][m] = 0;
        for (int j = 0; j < m; j++)
        {
            a[i][m] += a[i][j];
            mx = max(mx, a[i][j]);
            mn = min(mn, a[i][j]);
        }
        double pingjun = 1.0 * (a[i][m] - mn - mx) / (m - 2);

        ans = max(pingjun, ans);
    }

    printf("%.2lf\n", ans);

    return 0;
}
```
```cpp
#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int a[30];

double avr(int m)
{
    double x = 0;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);

    for (int i = 1; i < m - 1; i++)
        x += a[i];

    return x / (m - 2);
}

int main()
{
    int n, m;
    double ans = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        ans = max(avr(m), ans);
    }
    printf("%.2lf\n", ans);
    return 0;
}
```

# video

- 视频 第6课

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC6%E8%AF%BE.mp4" width="800px" height="600px" controls="controls"></video>

[下载第6课视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC6%E8%AF%BE.mp4)

- 视频 第7课

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC7%E8%AF%BE.mp4" width="800px" height="600px" controls="controls"></video>

[下载第7课视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC7%E8%AF%BE.mp4)

---
