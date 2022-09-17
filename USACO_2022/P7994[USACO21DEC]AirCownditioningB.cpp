#include <iostream>

using namespace std;

const int N = 1e5 + 5;

int p[N], t[N], a[N];

int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> t[i];
    for (int i = 1; i <= n; i++)
        a[i] = p[i] - t[i];

    for (int i = 0; i <= n; i++)
    {
        if (a[i] > a[i + 1])
            ans += a[i] - a[i + 1];
    }
    cout << ans << endl;

    return 0;
}
