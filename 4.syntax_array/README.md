# [点击转到视频 ↓ ](#video)

# [作业链接](https://www.luogu.com.cn/training/208270#problems)


#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/4.syntax_array/array.png)

# 例题

#### P1428 小鱼比可爱
```cpp
#include <iostream>

using namespace std;

int a[110], b[110] = {0};

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                b[i]++;

    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';

    return 0;
}
```

#### P1427 小鱼的数字游戏
```cpp
#include <iostream>

using namespace std;

int a[110];

int main()
{
    int i = 0;
    do
    {
        cin >> a[i];
        i++;
    } while (a[i - 1] != 0);

    for (i = i - 2; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }

    return 0;
}

```

#### P5728【深基5.例5】旗鼓相当的对手
```cpp
#include <iostream>

using namespace std;

const int MAXN = 1010;

int a[MAXN][5];

int main()
{
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        a[i][3] = a[i][0] + a[i][1] + a[i][2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i][0] - a[j][0] > 5 || a[i][0] - a[j][0] < -5)
                continue;
            if (a[i][1] - a[j][1] > 5 || a[i][1] - a[j][1] < -5)
                continue;
            if (a[i][2] - a[j][2] > 5 || a[i][2] - a[j][2] < -5)
                continue;
            if (a[i][3] - a[j][3] > 10 || a[i][3] - a[j][3] < -10)
                continue;
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
```
#### P5732深基5.习7】杨辉三角
```cpp
#include <iostream>

#define MAXN 25 //预定义

using namespace std;

const double PI = 3.14159;

int a[MAXN][MAXN];

int main()
{
    int n;
    cin >> n;
    // a[i][j] = a[i-1][j-1] + a[i-1][j]

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (j == 0 || j == i)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
```



# video

- 视频

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC4%E8%AF%BE.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC4%E8%AF%BE.mp4)


---
