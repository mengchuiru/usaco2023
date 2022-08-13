# [点击转到视频 ↓ ](#video)

# [作业](https://www.luogu.com.cn/training/207785#problems)


#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/2.syntax_if/if.png)

# 例题

#### 【深基3.例2】数的性质
``` cpp
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    bool p1, p2;
    p1 = x % 2 == 0;
    p2 = x > 4 && x <= 12;

    cout << (p1 && p2) << ' ';
    cout << (p1 || p2) << ' ';
    cout << (p1 + p2 == 1) << ' ';
    cout << (!p1 && !p2) << endl;

    return 0;
}
```

#### P5711 【深基3.例3】闰年判断

``` c++
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
        if (n % 100 == 0)
            if (n % 400 == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        else
            cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}
```


``` c++
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) << endl;
    return 0;
}
```

#### T263344 【深基3.例6】小洛机器人

```c++
#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    switch (x)
    {
    case 'G':
        cout << "Hello, my master!" << endl;
        cout << "I'm Xiaoluo." << endl;
        break;
    case 'N':
        cout << "I'm Xiaoluo." << endl;
        break;
    case 'S':
        cout << "Teinei teinei teinei~" << endl;
        break;
    case 'B':
    case 'Q':
        cout << "Bye bye!" << endl;
        break;
    default:
        cout << "Sorry..." << endl;
        break;
    }
    return 0;
}
```
``` c++
#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x == 'G')
        cout << "Hello, my master!" << endl
             << "I'm Xiaoluo." << endl;
    else if (x == 'N')
        cout << "I'm Xiaoluo." << endl;
    else if (x = 'S')
        cout << "Teinei teinei teinei~" << endl;
    else if (x == 'B' || x == 'Q')
        cout << "Bye bye!" << endl;
    else
        cout << "Sorry..." << endl;

    return 0;
}
```

#### P5712 【深基3.例4】Apples
``` c++
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x <= 1)
        cout << "Today, I ate " << x << " apple." << endl;
    else
        cout << "Today, I ate " << x << " apples." << endl;
    return 0;
}
```

---

# video

- 视频1
<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC2%E8%AF%BE_1.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC2%E8%AF%BE_1.mp4)

- 视频1
<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC2%E8%AF%BE_2.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC2%E8%AF%BE_2.mp4)

---
