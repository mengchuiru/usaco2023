#include <iostream>  //导入 输入输出流
using namespace std; //使用标准命名空间
int main()           //主函数
{
    int a1, a2;
    float b1 = 3.14;
    char c1 = 'q';
    bool d1 = true; // false:0    true:1

    cin >> a1 >> a2; //用 空格隔开

    cout << "第一个数：" << a1 << endl;
    cout << "第二个数：" << a2 << endl;
    return 0; // 返回值
}
