# [点击转到视频 ↓ ](#video)

# [作业链接]()
P5735,P5736,P5737,P5738,P5739,P5461,P5740,P5741,P5742,P1075,P1304,P1217,P2415,P5743,P5744

#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/7.syntax_pr/pr.png)

# 例题

#### 回文质数
```cpp
#include <iostream>
#include <string>
using namespace std;

bool ish(int n)
{
    string s;
    s = to_string(n);
    for (int i = 0; i <= s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

// 判断质数
bool isp(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / i; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    if (b >= 10000000)
        b = 10000000;

    for (int i = a; i <= b; i++)
    {
        if (ish(i) && isp(i))
            cout << i << endl;
    }

    return 0;
}
```

#### 埃氏筛法
```cpp
#include <iostream>

using namespace std;

// 埃氏筛法
const int N = 100000000;
int p[N], cnt = 0;
bool st[N];

void isp(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (!st[i])
        {
            p[cnt++] = i;
            
            for (int j = 2; j <= n / i; j++)
                st[i * j] = true;
        }
    }
}

int main()
{
    isp(1000);

    for (int i = 0; i < cnt; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}
```

#### 线性筛法 欧拉筛法
```cpp
#include <iostream>
using namespace std;

//线性筛法 欧拉筛
const int N = 100000000;
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
            st[p[j] * i] = true;
            if (i % p[j] == 0)
                break;
        }
    }
}

int main()
{
    setp(1000);
    for (int i = 0; i < cnt; i++)
        cout << p[i] << endl;
    return 0;
}
```

# video

- 视频 第8-1课

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/8th_1.mp4" width="800px" height="600px" controls="controls"></video>

[下载第8-1课视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/8th_1.mp4)

- 视频 第8-2课

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/8th_2.mp4" width="800px" height="600px" controls="controls"></video>

[下载第8-2课视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/8th_2.mp4)

---
