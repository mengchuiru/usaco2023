#include <iostream>

using namespace std;

string name[5000];
char d[26];
string n;

void init()
{
    d['A' - 'A'] = '2', d['B' - 'A'] = '2', d['C' - 'A'] = '2';
    d['D' - 'A'] = '3', d['E' - 'A'] = '3', d['F' - 'A'] = '3';
    d['G' - 'A'] = '4', d['H' - 'A'] = '4', d['I' - 'A'] = '4';
    d['J' - 'A'] = '5', d['K' - 'A'] = '5', d['L' - 'A'] = '5';
    d['M' - 'A'] = '6', d['N' - 'A'] = '6', d['O' - 'A'] = '6';
    d['P' - 'A'] = '7', d['R' - 'A'] = '7', d['S' - 'A'] = '7';
    d['T' - 'A'] = '8', d['U' - 'A'] = '8', d['V' - 'A'] = '8';
    d['W' - 'A'] = '9', d['X' - 'A'] = '9', d['Y' - 'A'] = '9';
}

/*
2: A,B,C     5: J,K,L    8: T,U,V
3: D,E,F     6: M,N,O    9: W,X,Y
4: G,H,I     7: P,R,S
*/
bool check(string na)
{
    for (int j = 0; j < n.size(); j++)
    {
        if (d[na[j] - 'A'] != n[j])
            return false;
    }
    return true;
}

int main()
{
    init();
    int cnt = 0;

    cin >> n;
    for (int i = 0; i < 4617; i++)
        cin >> name[i];

    for (int i = 0; i < 4617; i++)
    {
        if (name[i].size() != n.size())
            continue;
        if (check(name[i]))
        {
            cout << name[i] << endl;
            cnt++;
        }
    }
    if(cnt == 0)
        cout << "NONE" <<endl;
    return 0;
}
