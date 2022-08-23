#include <iostream>

using namespace std;

int a[101] = {0};

int fibo(int n)
{
    if (a[n] != 0)
        return a[n];
    if (n == 0 || n == 1)
        return 1;
    a[n] = fibo(n - 1) + fibo(n - 2);
    return a[n];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cout << i << ':' << fibo(i) << endl;
    return 0;
}