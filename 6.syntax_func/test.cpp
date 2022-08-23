#include <iostream>
#include <algorithm>

using namespace std;

int n = 0;
int a[10010];
int b[] = {3, 2, 1, 6, 5, 4, 9, 8, 7};

void ssort()
{
}

void print(int a[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}

int main()
{
    int aa[100];

    int a = 12, b = 10;

    sort(b, b + 9);

    cout << a << ' ' << b << endl;

    // int a[][4] = {{1, 2, 4, 3}, {1, 7, 4, 3}, {1, 2, 4, 3}, {1, 2, 4, 3}};
    // print(a, 4, 4);

    // cout << endl;

    // memset(a, 0, sizeof(a));
    // // 字符数组
    // char s1[] = "hello";
    // char s2[] = "world";

    // strcat(s1, s2);

    // cout << s1 << endl
    //      << s2 << endl;

    // int n = 123;
    // string s;

    // s = to_string(n);
    // n = stoi(s + s);
    // cout << s + s << endl;
    // cout << n * 2 << endl;

    // cmath
    // int m = -100;
    // double x = 3.1415;

    // cout << ceil(x) << endl;
    // cout << sqrt(2) << endl;
    // cout << pow(3, 8) << endl;

    // cout << fabs(m) << endl;

    // algorithm

    // int a = 10, b = 5, tmp;
    // int arra[] = {9, 7, 8, 6, 3, 4, 2, 1, 5};
    // swap(a, b);

    // cout << max(100, 90) << endl;
    // cout << min(90, 100) << endl;
    // cout << a << ' ' << b << endl;

    // sort(arra, arra + 9);
    // for (int j = 0; j < 10; j++)
    // {
    //     for (int i = 0; i < 9; i++)
    //         cout << arra[i] << ' ';
    //     cout << endl;
    //     next_permutation(arra, arra + 9);
    // }

    return 0;
}