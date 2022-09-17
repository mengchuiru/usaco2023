#include <iostream>

using namespace std;

bool check(int a, int b, int c)
{
    if (a > 999 || b > 999 || c > 999)
        return false;
    int x[10]={0}; // 计数排序  桶排序
    int tmp = a + b * 1000 + c * 1000000;
    for (int i = 0; i < 9; i++)
    {
        x[tmp % 10]++;
        tmp /= 10;
    }
    for (int i = 1; i < 10; i++)
        if (x[i] != 1)
            return false;

    return true;
}

int main()
{
    int A, B, C, cnt = 0;
    cin >> A >> B >> C;
    if(A<=0) 
    {
        cout << "No!!!" << endl;
        return 0;
    }

    for (int a = 123; a < 987; a++)
    {
        int b, c;
        if (a * B % A == 0 && a * C % A == 0)
        {
            b = a * B / A, c = a * C / A;
            if (check(a, b, c))
            {
                cout << a << ' ' << b << ' ' << c << endl;
                cnt++;
            }
        }
    }
    if (cnt == 0)
        cout << "No!!!" << endl;

    return 0;
}
