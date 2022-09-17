#include <iostream>
#include <algorithm>

using namespace std;

struct Person
{
    int t1, t2;
    bool operator<(const Person &x)
    {
        return t1 < x.t1;
    }

} p[5010];

int main()
{
    int n, ans1 = 0, ans2 = 0, l = 0, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i].t1 >> p[i].t2;
    sort(p, p + n);

    l = p[0].t1;
    r = p[0].t2;
    ans1 = r - l;

    for (int i = 1; i < n; i++)
    {
        if (p[i].t1 > r)
        {
            ans2 = max(ans2, p[i].t1 - r);
            ans1 = max(ans1, r - l);
            l = p[i].t1;
            r = p[i].t2;
        }
        else
        {
            r = max(r, p[i].t2);
        }
    }

    cout << ans1 << ' ' << ans2 << endl;

    return 0;
}
