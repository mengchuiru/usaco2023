#include <iostream>

using namespace std;

int main()
{
    int l, s = 0, cnt = 0, i = 2;
    bool p;
    cin >> l;
    while (true)
    {
        p = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                p = false;
                break;
            }
        }

        if (p)
        {
            s += i;
            if (s > l)
                break;
            cout << i << endl;
            cnt++;
        }
        i++;
    }
    cout << cnt << endl;

    return 0;
}