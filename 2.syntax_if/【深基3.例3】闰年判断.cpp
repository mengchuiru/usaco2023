/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
        if (n % 100 == 0)
            if (n % 400 == 0)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        else
            cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}*/

// 1、能被4整除 且 不能被100整除
// 2、能被400整除

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) << endl;

    return 0;
}
