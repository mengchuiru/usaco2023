#include <iostream>

using namespace std;

int main()
{
    long long n, m, z = 0, c = 0, x, y;
    cin >> n >> m;

    for (x = 1; x <= n; x++)
        for (y = 1; y <= m; y++)
            if (x == y)
                z += (n + 1 - x) * (m + 1 - y);
            else
                c += (n + 1 - x) * (m + 1 - y);

    cout << z << ' ' << c << endl;
    return 0;
}
