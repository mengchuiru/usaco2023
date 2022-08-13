//输出 1~n的偶数

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        i++;
        if (i % 2 == 1)
            continue;
        cout << i << endl;
    }
    return 0;
}