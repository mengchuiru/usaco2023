#include <iostream>
#include <string> // c++

using namespace std;

int a = 10;
string s, s1, s2; //声明

int main()
{
    s = "123abc456";
    s1 = "23";
    a = s.find(s1);
    s2 = s.insert(3, s1);

    cout << a << endl;

    cout << s[3] << endl;
    cout << s.substr(2, 5) << endl; // 截取一段
    cout << s2 << endl;
    cout << a << endl;

    return 0;
}