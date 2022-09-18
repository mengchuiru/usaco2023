# [点击转到视频 ↓ ](#video)

# 作业链接

#  知识点


#### 202112-1 铜
```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    long long ans = 0, a, b;
    string s;
    cin >> n >> s;

    if (s[0] != s[1])
    {
        b = 0;
        for (int j = 1; j < n; j++)
        {
            if (s[0] == s[j])
                break;
            b++;
        }
        ans += b - 1;
    }

    if (s[n - 1] != s[n - 2])
    {
        a = 0;
        for (int j = n - 2; j >= 0; j--)
        {
            if (s[n - 1] == s[j])
                break;
            a++;
        }
        ans += a - 1;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == s[i + 1] && s[i] == s[i - 1])
            continue;
        a = 0, b = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (s[i] == s[j])
                break;
            a++;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
                break;
            b++;
        }

        if (a == 0)
            ans += b - 1;
        if (b == 0)
            ans += a - 1;
        if (a > 0 && b > 0)
        {
            ans += (a + 1) * (b + 1) - 3;
        }
    }

    cout << ans << endl;

    return 0;
}
```



# video

- 视频 第14课

<video src="https://m-pan.glitch.me/Vidies/14th.mp4" width="800px" height="600px" controls="controls"></video>

[下载第14课视频](https://m-pan.glitch.me/Vidies/14th.mp4)



- 视频 第15课

<video src="" width="800px" height="600px" controls="controls"></video>

[下载第15课视频]()


---
