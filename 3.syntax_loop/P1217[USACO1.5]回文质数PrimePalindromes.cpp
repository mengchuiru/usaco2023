#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isp(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool ish(int n)
{
    string s;
    s = to_string(n);
    int m = s.size();
    for (int i = 0; i < (m) / 2; i++)
    {
        if (s[i] != s[m - 1 - i])
            return false;
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (ish(i) && isp(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}