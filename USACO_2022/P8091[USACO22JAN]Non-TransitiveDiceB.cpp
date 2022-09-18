#include <iostream>

using namespace std;

int cmp(int x[], int y[])
{
    int ret = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            if (x[i] > y[j])
                ret++;
            else if (x[i] < y[j])
                ret--;
        }

    return ret;
}

bool findc(int x[], int y[], int z[])
{
    if (cmp(x, y) == 0)
        return false;
    else if (cmp(x, y) > 0)
    {
        for (z[0] = 1; z[0] <= 10; z[0]++)
            for (z[1] = 1; z[1] <= 10; z[1]++)
                for (z[2] = 1; z[2] <= 10; z[2]++)
                    for (z[3] = 1; z[3] <= 10; z[3]++)
                    {
                        if (cmp(z, x) > 0 && cmp(y, z) > 0)
                            return true;
                    }
    }
    else
    {
        for (z[0] = 1; z[0] <= 10; z[0]++)
            for (z[1] = 1; z[1] <= 10; z[1]++)
                for (z[2] = 1; z[2] <= 10; z[2]++)
                    for (z[3] = 1; z[3] <= 10; z[3]++)
                    {
                        if (cmp(x, z) > 0 && cmp(z, y) > 0)
                            return true;
                    }
    }

    return false;
}

int main()
{
    int T;
    int a[5], b[5], c[5];
    cin >> T;
    while (T--)
    {
        for (int i = 0; i < 4; i++)
            cin >> a[i];
        for (int i = 0; i < 4; i++)
            cin >> b[i];

        if (findc(a, b, c))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
