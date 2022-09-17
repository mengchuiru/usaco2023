#include <iostream>

using namespace std;

struct Person
{
    string name;
    int m = 0;
} p[15];

int find_name(string name0)
{
    int x = 0;
    while (x < 14)
    {
        if (p[x].name == name0)
            return x;
        x++;
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    // 读取姓名
    for (int i = 0; i < n; i++)
        cin >> p[i].name;
    // 每个人分钱
    for (int i = 0; i < n; i++)
    {
        string tmp_name;
        cin >> tmp_name;
        int ix0 = find_name(tmp_name);
        int m1, n1;
        cin >> m1 >> n1;
        if (n1 != 0)
        {
            for (int j = 0; j < n1; j++)
            {
                string tmp_name2;
                cin >> tmp_name2;
                int ix1 = find_name(tmp_name2);
                p[ix1].m += m1 / n1;
                
            }
            p[ix0].m += m1 % n1 - m1;
        }
    }

    for (int i = 0; i < n; i++)
        cout << p[i].name << ' ' << p[i].m << endl;

    return 0;
}
