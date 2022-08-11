#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 2)
        cout << "Today, I ate " << x << " apples.";
    else
        cout << "Today, I ate " << x << " apple.";

    return 0;
}