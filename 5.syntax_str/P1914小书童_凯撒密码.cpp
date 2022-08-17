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