#include <iostream>

using namespace std;

string T(int x, int b)
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

bool is_h(string s)
{
    for (int i = 0; i <= s.size() / 2; i++)
        if (s[i] != s[s.size() - 1 - i])
            return false;
    return true;
}

int main()
{
    int n, s;
    cin >> n >> s;
    while (n)
    {
        int cnt = 0;
        s++;
        for (int i = 2; i <= 10; i++)
        {
            if (is_h(T(s, i)))
            {
                cnt++;
                if (cnt >= 2)
                {
                    cout << s << endl;
                    break;
                }
            }
        }
        if (cnt >= 2)
            n--;
    }

    return 0;
}
