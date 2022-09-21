#include <iostream>
#include <cstring>

using namespace std;

int a[100005];

bool chck(long long sum, int n, int k)
{
    if (k == 0)
    {
        for (int i = 0; i < n; i++)
            if (a[i] != a[0])
                return false;
        return true;
    }
    if (sum % (n - k) != 0)
        return false;
    int s = sum / (n - k);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > s)
            return false;
        else if (a[i] == s)
            s = sum / (n - k);
        else
            s -= a[i];
    }
    return true;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(a, 0, sizeof(a));
        int n;
        long long sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (chck(sum, n, i))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
