#include <iostream>

using namespace std;

int a[110];

// 判断质数
bool is_prime(int x)
{
    if (x <= 1)
        return false;
    for (int i = 2; i <= x / i; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        if (is_prime(a[i]))
            cout << a[i] << ' ';

    return 0;
}