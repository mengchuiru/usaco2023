#include <iostream>

using namespace std;

int a[5][30];

bool check(string s)
{
    int b[4] = {0, 1, 2, 3};
    for (int i = 0; i < s.size(); i++)
    {
        
    }
}

int main()
{
    char tmp;
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            a[i][tmp - 'A']++;
        }
    for (int i = 0; i < n; i++)
    {
        cin >> s;
    }

    return 0;
}
