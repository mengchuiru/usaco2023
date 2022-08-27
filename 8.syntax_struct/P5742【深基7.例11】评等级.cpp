#include <iostream>

using namespace std;
const int N = 1010;

struct Stu
{
    int num, s1, s2, s3;

    int total()
    {
        return s1 + s2;
    }

} su[N];

bool isgood(Stu x)
{
    if (x.total() > 140 && x.s3 <= 800)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> su[i].num >> su[i].s1 >> su[i].s2;
        su[i].s3 = 7 * su[i].s1 + 3 * su[i].s2;
    }


    for (int i = 0; i < n; i++)
    {
        if (su[i].total() > 140 && su[i].s3 >= 800)
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }

    return 0;
}
