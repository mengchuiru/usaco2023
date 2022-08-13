#include <iostream>
using namespace std;

int main()
{
    int n, m = 1001, a;
    cin >> n;

    while (n--)
    {
        cin >> a;
        if (a < m)
            m = a;
    }

    cout << m << endl;
    return 0;
}