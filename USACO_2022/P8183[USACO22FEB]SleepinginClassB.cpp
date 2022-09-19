#include <iostream>
#include <cstring>

using namespace std;

int a[100005];

bool check(long long sum, int n, int k)
{
    if (sum %k != 0)
        return false;
    int s = sum /k;
    for(int i=0;i<n;)
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(a, 0, sizeof(a));
        long long n, sum = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (check(i))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
