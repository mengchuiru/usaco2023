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