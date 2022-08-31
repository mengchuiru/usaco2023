# [点击转到视频 ↓ ](#video)

# 作业链接
[P5461 赦免战俘](https://www.luogu.com.cn/problem/P5461)

#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/8.syntax_struct/struct.png)

# 例题

#### 最厉害的学生
```cpp
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;


struct Stu
{
    string name;
    int chinese, math, english, total;

    void input()
    {
        cin >> name >> chinese >> math >> english;
        total = chinese + math + english;
    }

    void output()
    {
        cout << name << ' ' << chinese << ' ' << math << ' ' << english << ' ' << total << endl;
    }

    bool operator<(const Stu &x)
    {
        return total < x.total;
    }

} su[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        su[i].input();

    sort(su, su + n);

    for (int i = 0; i < n; i++)
        su[i].output();

    return 0;
}

```
#### 旗鼓相当的对手 加强版
```cpp
#include <iostream>

using namespace std;

const int N = 1010;

struct Stu
{
    string name;
    int chinese, math, english, total;

    bool check(const Stu &x)
    {
        if (abs(chinese - x.chinese) <= 5)
            if (abs(math - x.math) <= 5)
                if (abs(english - x.english) <= 5)
                    if (abs(total - x.total) <= 10)
                        return true;

        return false;
    }

} su[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> su[i].name >> su[i].chinese >> su[i].math >> su[i].english;
        su[i].total = su[i].chinese + su[i].math + su[i].english;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (su[i].check(su[j]))
            {
                if (su[i].name <= su[j].name)
                    cout << su[i].name << ' ' << su[j].name << endl;
                else
                    cout << su[j].name << ' ' << su[i].name << endl;
            }
        }
    }

    return 0;
}

```

#### 评等级
```cpp
#include <iostream>

using namespace std;
const int N = 1010;

struct Stu
{
    int num, s1, s2, s3;

    int total()
    {
        return s1 + s2;
    }

} su[N];

bool isgood(Stu x)
{
    if (x.total() > 140 && x.s3 <= 800)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> su[i].num >> su[i].s1 >> su[i].s2;
        su[i].s3 = 7 * su[i].s1 + 3 * su[i].s2;
    }


    for (int i = 0; i < n; i++)
    {
        if (su[i].total() > 140 && su[i].s3 >= 800)
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }

    return 0;
}

```


# video

- 视频 第9课

<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/9th.mp4" width="800px" height="600px" controls="controls"></video>

[下载第9课视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/9th.mp4)



---
