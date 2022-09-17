#include <iostream>
#include <algorithm>

using namespace std;

// 将整数x 转换成b进制，返回字符串；
string base(int x, int b)
{
    string s;
    char c;
    while (x)
    {
        if (x % b < 10)
            c = x % b + '0';
        else
            c = x % b - 10 + 'A';
        s = c + s;
        x /= b;
    }
    return s;
}

// 判断回文数
bool is_h(string s)
{
    for (int i = 0; i <= s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main()
{
    int B;
    cin >> B;
    for (int i = 1; i <= 300; i++)
    {
        string ss = base(i * i, B), str;
        str = ss;
        reverse(str.begin(), str.end()); // 翻转字符串
        if (str == ss)
        {
            cout << base(i, B) << ' ' << ss << endl;
        }
    }
    return 0;
}
