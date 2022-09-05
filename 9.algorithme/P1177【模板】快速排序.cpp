#include <iostream>
#include <algorithm>

using namespace std;

int a[100005];

void qsort(int q[], int l, int r)
{
    if (l >= r)
        return;
    int x = q[l], i = l - 1, j = r + 1;
    while (i < j)
    {
        do
            i++;
        while (q[i] < x);
        do
            j--;
        while (q[j] > x);
        if (i < j)
            swap(q[i], q[j]);
    }
    qsort(q, l, j);
    qsort(q, j + 1, r);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;

    return 0;
}
