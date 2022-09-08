#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int a[5000005], n, k;

void qsort(int q[], int l, int r)
{

    if (l >= r)
        return;
    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        while (q[++i] < x)
            ;
        while (q[--j] > x)
            ;
        if (i < j)
            swap(q[i], q[j]);
    }

    // if (k <= j)
    qsort(q, l, j);
    // else if (k >= i)
    qsort(q, j + 1, r);
    // else
    // {
    //     printf("%d\n", q[j + 1]);
    //     exit(0);
    // }
}

int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    qsort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
