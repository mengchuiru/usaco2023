#include <iostream>

using namespace std;

int main()
{
    int k, sum = 0, d = 0, n;
    cin >> k;
    for (n = 1; d + n <= k; n++)
    {
        d += n;
        sum += n * n;
    }
    sum += (k - d) * n;
    cout << sum << endl;

    return 0;
}
