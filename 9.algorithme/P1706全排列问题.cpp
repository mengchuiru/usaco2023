#include <iostream>
#include <algorithm>

using namespace std;

int a[10];

bool next_p(int n)
{
    int p, q;
    p = n - 1;
    while (a[p - 1] > a[p])
    {
        p--;
        if (p <= 0) //已经排列最大
            return false;
    }
    q = n-1;
    while(a[q]<a[p]) q--;
    swap(a[q],a[p]);

    for(int i=p+1;i<=p+n/2;i++)
    {
        swap(a[i],a[n+p-i]);
    }

    // reverse(a+p+1,a+n); //交换 p+1 ~ n-1




}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    do
    {
        for (int i = 0; i < n; i++)
            printf("%5d", a[i]);
        cout << endl;
    } while (next_p(n));

    return 0;
}
