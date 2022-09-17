#include <iostream>

using namespace std;

int a[5000005], n, k;

void qsort(int q[], int l, int r)
{

    if (l == r)
    {
        printf("%d\n", q[l]);
        exit(0);
    }
    else if (l > r)
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

    if (k <= j)
        qsort(q, l, j);
    else if (k >=j+1)
        qsort(q, j + 1, r);
}

int main()
{
    cin >> n >> k;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    qsort(a, 0, n - 1);

    return 0;
}
