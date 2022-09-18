#include <iostream>
#include <cstring>

using namespace std;

const int N = 1e5 + 5;

long long  h[N], b[N];

int main()
{
    long long T;
    cin >> T;
    while (T--)
    {
        memset(h, 0, sizeof(h));
        memset(b, 0, sizeof(b));
        long long n, ans = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> h[i];
            b[i - 1] = h[i] - h[i - 1];
        }

        for (int i = 1; i < n; i++)
        {
            if (i == n - 1 && b[i] > 0)
            {
                ans = -1;
                break;
            }

            if (b[i] > 0)
            {
                ans += 2 * b[i];
                b[i + 2] += b[i];
                b[i] = 0;
            }
            else if (b[i] < 0)
            {
                if (i % 2 == 1)
                {
                    ans = -1;
                    break;
                }
                else
                {
                    b[0] += b[i];
                    if (b[0] < 0)
                    {
                        ans = -1;
                        break;
                    }
                    ans += i * (0 - b[i]);
                    b[i] = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
