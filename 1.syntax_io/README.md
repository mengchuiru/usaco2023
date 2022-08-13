# [点击转到视频](#video)
# [作业](https://www.luogu.com.cn/training/207271#problems)

P1001	P1000	P5703	P5704	P5705	P5706	P1425	P2433	P5708	P1421	P5709	P2181	P5707	P3954	T256405	T260346	T260371	T260385	T260392


#  知识点
![思维导图](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/USACO/usaco2023/1.syntax_io/IO.png)

# 例题

#### hello world
``` c++
#include <iostream>

using namespace std;

int main()
{
    cout << "hello world!" <<endl;
    return 0;
}
```

#### 输出第二个整数
``` c++
#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    cout << a2 <<endl;
    return 0;
}
```

#### 对齐输出
 ``` c++
 #include <cstdio>

int main()
{
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);

    printf("%8d\n%8d\n%8d", a1, a2, a3);

    return 0;
}
 ```
 #### 保留3位小数
``` c++
#include <cstdio>
int main()
{
    float a;
    scanf("%f", &a);
    printf("%.3f", a);

    return 0;
}
```
#### 字符三角形

``` c++
#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    cout << ' ' << ' ' << c << endl;
    cout << ' ' << c << c << c << endl;
    cout << c << c << c << c << c << endl;

    return 0;
}
```
``` c++
#include <cstdio>

int main()
{
    char c;
    scanf("%c", &c);
    printf("  %c\n %c%c%c\n%c%c%c%c%c\n",c,c,c,c,c,c,c,c,c);

    return 0;
}

```


---

## ASCII码对照表

数字|字符||数字|字符||数字|字符||数字|字符
:-:|:-:|-|:-:|:-:|-|:-:|:-:|-|:-:|:-:
0|NUL ||33|!||65|A||97|a
1|SOH ||34|"||66|B||98|b
2|STX||35|#||67|C||99|c
3|ETX ||36|$||68|D||100|d
4|EOT ||37|%||69|E||101|E
5|ENQ||38|&||70|F||102|F
6|ACK||39|'||71|G||103|g
7|BEL||40|(||72|H||104|h
8|BS||41|)||73|I||105|i
9|HT||42|*||74|J||106|j
10|LF/NL||43|+||75|K||107|k
11|VT||44|,||76|L||108|l
12|FF/NP||45|-||77|M||109|m
13|CR ||46|.||78|N||110|n
14|SO ||47|/||79|O||111|o
15|SI||48|0||80|P||112|p
16|DLE||49|1||81|Q||113|q
17|DC1/XON||50|2||82|R||114|r
18|DC2||51|3||83|S||115|s
19|DC3/XOFF||52|4||84|T||116|t
20|DC4||53|5||85|U||117|u
21|NAK||54|6||86|V||118|v
22|SYN ||55|7||87|W||119|w
23|ETB ||56|8||88|X||120|x
24|CAN||57|9||89|Y||121|y
25|EM||58|:||90|Z||122|z
26|SUB||59|;||91|[||123|{
27|ESC||60|< ||92| \ ||124| \|
28|FS ||61|=||93|]||125|}
29|GS ||62|> ||94|^||126|~
30|RS||63|?||95|_||127|Del
31|US||64|@||96|`|||
32|(Space)|||||||||

---

# video
<video src="https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC1%E8%AF%BE-%E8%BE%93%E5%85%A5%E8%BE%93%E5%87%BA.mp4" width="800px" height="600px" controls="controls"></video>

[下载视频](https://c44bdf47ba484aa98328d13683451955.apig.cn-east-3.huaweicloudapis.com/Vidies/%E7%AC%AC1%E8%AF%BE-%E8%BE%93%E5%85%A5%E8%BE%93%E5%87%BA.mp4)