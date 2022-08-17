#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int a1 = 1, a2 = 1;
    for (int i = 0; i < s1.size(); i++)
        a1 *= (s1[i] - 'A' + 1);
    a1 %= 47;
    for (int i = 0; i < s2.size(); i++)
        a2 *= (s2[i] - 'A' + 1);
    a2 %= 47;

    if (a1 == a2)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}