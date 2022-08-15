#include <iostream>

using namespace std;

int a[110];

int main()
{
    int i = 0;
    do
    {
        cin >> a[i];
        i++;
    } while (a[i - 1] != 0);

    for (i = i - 2; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }

    return 0;
}
