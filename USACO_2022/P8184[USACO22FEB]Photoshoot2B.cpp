#include <iostream>

using namespace std;

const int N = 1e5 + 5;

int a[N], b[N];

int main()
{
    int n, tmp, ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        b[tmp] = i;
    }
    int m = b[a[0]];
    for (int i = 1; i <= n; i++)
    {
        if(b[a[i]] < m)
            ans++;
        else    
            m = b[a[i]];
    }
        
    cout << ans << endl;

    return 0;
}
