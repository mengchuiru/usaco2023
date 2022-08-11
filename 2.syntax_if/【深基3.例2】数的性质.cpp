#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    bool p1, p2;
    p1 = x % 2 == 0;
    p2 = x > 4 && x <= 12;
    cout << (p1 && p2) << ' ' << (p1 || p2) << ' ' << (p1 + p2 == 1) << ' ' << (!p1 && !p2) << endl;

    return 0;
}