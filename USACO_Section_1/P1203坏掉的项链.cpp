#include <iostream>

using namespace std;

int n, ans = 0;

int count(string s)
{
    int ans1 = 0;

    // 从前往后 数
    char col = 'w';
    for (int i = 0; i < n; i++)
    {
        if (col == 'w')
        {
            if (s[i] == 'r')
                col = 'r';
            else if (s[i] == 'b')
                col = 'b';
        }
        else if (col == 'r')
        {
            if (s[i] == 'b')
                break;
        }
        else if (col == 'b')
        {
            if (s[i] == 'r')
                break;
        }
        ans1++;
    }
    // 从后往前数
    col = 'w';
    for (int i = n - 1; i >= 0; i--)
    {
        if (col == 'w')
        {
            if (s[i] == 'r')
                col = 'r';
            else if (s[i] == 'b')
                col = 'b';
        }
        else if (col == 'r')
        {
            if (s[i] == 'b')
                break;
        }
        else if (col == 'b')
        {
            if (s[i] == 'r')
                break;
        }
        ans1++;
    }
    return ans1;
}

int main()
{

    string s;
    cin >> n;
    cin >> s;

    //枚举所有的情况
    for (int i = 0; i < n; i++)
    {
        string ss;
        ss = s.substr(i, n) + s.substr(0, i);
        ans = max(count(ss), ans);
    }
    if (ans > n)
        ans = n;
    cout << ans << endl;
    return 0;
}
