#include <iostream>
#include <cstdio>

using namespace std;

int a[1010];

int main()
{
    int n, m, tmp;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &tmp);
        a[tmp]++;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 0; j < a[i]; j++)
            printf("%d ", i);
    cout << endl;
    return 0;
}
