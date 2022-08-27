#include <iostream>

using namespace std;

const int N = 1010;

struct Stu
{
    string name;
    int chinese, math, english, total;

    bool check(const Stu &x)
    {
        if (abs(chinese - x.chinese) <= 5)
            if (abs(math - x.math) <= 5)
                if (abs(english - x.english) <= 5)
                    if (abs(total - x.total) <= 10)
                        return true;

        return false;
    }

} su[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> su[i].name >> su[i].chinese >> su[i].math >> su[i].english;
        su[i].total = su[i].chinese + su[i].math + su[i].english;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (su[i].check(su[j]))
            {
                if (su[i].name <= su[j].name)
                    cout << su[i].name << ' ' << su[j].name << endl;
                else
                    cout << su[j].name << ' ' << su[i].name << endl;
            }
        }
    }

    return 0;
}
