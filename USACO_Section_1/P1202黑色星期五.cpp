#include <iostream>

using namespace std;

int week[7] = {0};
int month[14] = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

int main()
{
    int n, year = 1900, wd = 6-31;
    cin >> n;
    while (year < 1900 + n)
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            month[2] = 29;
        else
            month[2] = 28;

        for (int i = 0; i < 12; i++)
        {
            wd = (wd + month[i]) % 7;
            week[wd]++;
        }
        year++;
    }

    for (int i = 0; i < 7; i++)
        cout << week[(i + 6) % 7] << ' ';
    cout << endl;
    return 0;
}
