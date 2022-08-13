#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("%02d",x);
            x++;
        }
        cout << endl;
    }
    return 0;
}