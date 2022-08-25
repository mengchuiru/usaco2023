#include <iostream>

using namespace std;

// bool isp(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i <= n / i; i++)
//         if (n % i == 0)
//             return false;
//     return true;
// }

int main()
{
    int n;
    cin >> n;

    for (int i = 2; i < n / i; i++)
    {
        if (n % i == 0)
        {
            cout << n / i << endl;
            return 0;
        }
    }

    return 0;
}