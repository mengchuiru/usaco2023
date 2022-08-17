# [点击转到视频 ↓ ](#video)

# [作业链接](https://www.luogu.com.cn/training/208682#problems)


#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/5.syntax_str/str.png)

# 例题

#### 字符数组的函数

```cpp
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char a[] = {'h', 'a', 'o', '\0'};
char c[10];
char b[] = "hello";
char aa[] = "9990";
char bb[] = "999";

int main()
{

    strcpy(c, b);
    cout << strlen(a) << endl;
    cout << strcmp(aa, bb) << endl;

    printf("%s\n", c);

    return 0;
}
```

#### P5733 【深基6.例1】自动修正
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= ('a'-'A');
    }
    cout << s << endl;
    return 0;
}
```

#### P1914 小书童——凯撒密码
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string s, ss;
    cin >> n >> s;
    ss.resize(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        ss[i] = 'a' + (s[i] + n - 'a') % 26;
    }
    cout << ss << endl;
    return 0;
}
```

#### P1200	[USACO1.1]你的飞碟在这儿Your Ride Is Here
```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a1 = 1, a2 = 1;
    for (int i = 0; i < s1.size(); i++)
        a1 *= (s1[i] - 'A' + 1);
    a1 %= 47;
    for (int i = 0; i < s2.size(); i++)
        a2 *= (s2[i] - 'A' + 1);
    a2 %= 47;

    if (a1 == a2)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}
```

#### P1125	[NOIP2008 提高组] 笨小猴
```cpp
#include <iostream>
#include <string>

using namespace std;

int cnt[26] = {0};  // 桶排序

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        cnt[s[i] - 'a']++;
    }
    int maxn = 0, minn = 110;

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            if (cnt[i] > maxn)
                maxn = cnt[i];
            if (cnt[i] < minn)
                minn = cnt[i];
        }
    }
    int x = maxn - minn;

//  判断质数
    if (x == 0 || x == 1)
    {
        cout << "No Answer" << endl
             << 0 << endl;
        return 0;
    }
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            cout << "No Answer" << endl
                 << 0 << endl;
            return 0;
        }
    }
    cout << "Lucky Word" << endl
         << x << endl;

    return 0;
}
```

# video

- 视频

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC5%E8%AF%BE.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC5%E8%AF%BE.mp4)


---
