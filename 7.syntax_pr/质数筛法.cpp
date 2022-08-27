#include <iostream>

using namespace std;

const int N = 100000000;
int p[N], cnt = 0;
bool st[N];

// 埃氏筛法
// void setp(int n)
// {
//     for (int i = 2; i < n; i++)
//     {
//         if (!st[i])
//         {
//             p[cnt++] = i;
//             for (int j = 2; j <= n / i; j++)
//                 st[i * j] = true;
//         }
//     }
// }

//线性筛法 欧拉筛
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
    setp(1000);

    for (int i = 0; i < cnt; i++)
    {
        cout << p[i] << endl;
    }

    return 0;
}