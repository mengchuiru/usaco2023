#include <iostream>
#include <algorithm>

using namespace std;

const int N = 1010;


struct Stu
{
    string name;
    int chinese, math, english, total;

    void input()
    {
        cin >> name >> chinese >> math >> english;
        total = chinese + math + english;
    }

    void output()
    {
        cout << name << ' ' << chinese << ' ' << math << ' ' << english << ' ' << total << endl;
    }

    bool operator<(const Stu &x)
    {
        return total < x.total;
    }

} su[N];

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        su[i].input();

    sort(su, su + n);

    for (int i = 0; i < n; i++)
        su[i].output();

    return 0;
}
