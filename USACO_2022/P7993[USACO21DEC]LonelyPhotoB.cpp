// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     long long ans = 0, a, b;
//     string s;
//     cin >> n >> s;

//     if (s[0] != s[1])
//     {
//         b = 0;
//         for (int j = 1; j < n; j++)
//         {
//             if (s[0] == s[j])
//                 break;
//             b++;
//         }
//         ans += b - 1;
//     }

//     if (s[n - 1] != s[n - 2])
//     {
//         a = 0;
//         for (int j = n - 2; j >= 0; j--)
//         {
//             if (s[n - 1] == s[j])
//                 break;
//             a++;
//         }
//         ans += a - 1;
//     }

//     for (int i = 1; i < n - 1; i++)
//     {
//         if (s[i] == s[i + 1] && s[i] == s[i - 1])
//             continue;
//         a = 0, b = 0;
//         for (int j = i - 1; j >= 0; j--)
//         {
//             if (s[i] == s[j])
//                 break;
//             a++;
//         }
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[i] == s[j])
//                 break;
//             b++;
//         }

//         if (a == 0)
//             ans += b - 1;
//         if (b == 0)
//             ans += a - 1;
//         if (a > 0 && b > 0)
//         {
//             ans += (a + 1) * (b + 1) - 3;
//         }
//     }

//     cout << ans << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

const int N = 5e5 + 10;

long long a[N], cnt = 0;

int main()
{
    long long n, ans = 0;
    string s;
    cin >> n >> s;
    char flag = s[0];
    for (int i = 0; i < n; i++)
    {
        if (s[i] == flag)
            a[cnt]++;
        else
        {
            flag = s[i];
            cnt++;
            a[cnt]++;
        }
    }

    ans += a[1]-1;
    ans += a[cnt-1] -1;
    for (int i = 1; i < cnt; i++)
    {
        // cout << a[i] << ' ';
        if (a[i] == 1)
        {
            ans += (a[i-1]+1)*(a[i+1]+1)-3;
        }
        else{
            ans += a[i-1]-1;
            ans += a[i+1]-1;
        }
    }

    cout << ans <<endl;

    return 0;
}
