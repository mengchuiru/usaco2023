#include <iostream>
#include <cmath>

using namespace std;

const int N = 1050;

bool st[N][N];

void fun(int x, int y, int n)
{
   if (n == 0)
   {
      st[x][y] = true;
      return;
   }
   int c = (1 << (n - 1));
   fun(x, y + c, n - 1);
   fun(x + c, y, n - 1);
   fun(x + c, y + c, n - 1);
}

int main()
{
   int n;
   cin >> n;

   fun(0, 0, n);

   int m = (1 << n);
   for (int i = 0; i < m; i++)
   {
      for (int j = 0; j < m; j++)
      {
         cout << st[i][j] << ' ';
      }
      cout << endl;
   }

   return 0;
}
