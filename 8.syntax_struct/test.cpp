#include <iostream>
#include <string>

using namespace std;

/*
bit
8bit Byte
int 32bit
long long 64bit

float
double 64bit

char 8bit
bool 8bit

string

*/

// 姓名  语文 数学 英语
struct student
{
    string name;
    int cn, ma, en;
} stu, s;

int main()
{
    string s0,s1;
    int n = s0.size();
    s0 = s0+"hello";
    s1<s0;
    
    student ss[100];

    stu.name = "xiaoming";
    stu.cn = 100;
    stu.ma = 120;
    stu.en = 130;

    ss[0].name = "xiaohong";

    cout << stu.name << endl;

    return 0;
}
