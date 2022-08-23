#include <iostream>
#include <cmath>
using namespace std;

double fun(double x1, double y1, double x2, double y2)
{
    double d;
    d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    d = sqrt(d);
    return d;
}



int main()
{
    double x1, y1, x2, y2, x3, y3, l = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // l += diss(x1, y1, x2, y2);
    // l += diss(x2, y2, x3, y3);
    // l += diss(x3, y3, x1, y1);

    printf("%.2lf\n", l);

    return 0;
}