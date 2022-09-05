#include <iostream>

using namespace std;

int main()
{
    int k, ans = 0, n, d = 0, s = 0;
    cin >> k;
    for (n = 1; d + n < k; n++)
    {
        d += n;
        s += n * n;
    }
    ans = s + n * (k - d);

    cout << ans << endl;

    return 0;
}
