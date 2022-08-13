# [点击转到视频 ↓ ](#video)

# [作业链接](https://www.luogu.com.cn/training/207790#problems)


#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/3.syntax_loop/loop.png)

# 例题


#### 输出1~n
---
```cpp
//for循环
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int j = 1; j <= n; j++)
    {
        cout << j << endl;
    }
    return 0;
}
```
```cpp
// while循环
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i<=n)
    {
        cout << i <<endl;
        i++;
    }

    return 0;
}
```
```cpp
// do while循环
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= n);

    return 0;
}
```
#### 输出 1~n的偶数
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        i++;
        if (i % 2 == 1)
            continue;
        cout << i << endl;
    }
    return 0;
}
```



#### 【深基4.例2】找最小值
```cpp
#include <iostream>
using namespace std;

int main()
{
    int n, m = 1001, a;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < m)
            m = a;
    }

    cout << m << endl;
    return 0;
}
```
#### 【深基4.例3】分类平均
```cpp
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k, s1 = 0, s2 = 0, c1 = 0, c2 = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            s1 += i;
            c1++;
        }
        else
        {
            s2 += i;
            c2++;
        }
    }
    printf("%.1f %.1f\n", s1 * 1.0 / c1, s2 * 1.0 / c2);

    return 0;
}
```
#### 【深基4.例4】一尺之棰
```cpp
#include <iostream>
using namespace std;

int main()
{
    int a, day = 1;
    cin >> a;

    while (a > 1)
    {
        a = a / 2; // a/=2;
        day++;
    }
    cout << day << endl;

    return 0;
}
```
#### 数字直角三角形
```cpp
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%02d",x);
            x++;
        }
        cout << endl;
    }
    return 0;
}
```
#### 【深基4.例13】质数口袋
```cpp
#include <iostream>

using namespace std;

int main()
{
    int l, s = 0, cnt = 0, i = 2;
    bool p;
    cin >> l;
    while (true)
    {
        p = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = false;
                break;
            }
        }

        if (p)
        {
            s += i;
            if (s > l)
                break;
            cout << i << endl;
            cnt++;
        }
        i++;
    }
    cout << cnt << endl;

    return 0;
}
```

# video

- 视频

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC3%E8%AF%BE.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC3%E8%AF%BE.mp4)


---
