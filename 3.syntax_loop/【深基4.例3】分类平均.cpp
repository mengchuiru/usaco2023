#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, k, s1 = 0, s2 = 0, c1 = 0, c2 = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            s1 += i;
            c1++;
        }
        else
        {
            s2 += i;
            c2++;
        }
    }
    printf("%.1f %.1f\n", s1 * 1.0 / c1, s2 * 1.0 / c2);

    return 0;
}