#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x == 'G')
    {
        cout << "Hello, my master!" << endl
             << "I'm Xiaoluo." << endl;
    }

    else if (x == 'N')
    {
        cout << "I'm Xiaoluo." << endl;
    }

    else if (x == 'S')
    {
        cout << "Teinei teinei teinei~" << endl;
    }

    else if (x == 'B' || x == 'Q')
    {
        cout << "Bye bye!" << endl;
    }

    else
    {
        cout << "Sorry..." << endl;
    }

    return 0;
}

/*#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    switch (x)
    {
    case 'G':
        cout << "Hello, my master!" << endl;
        cout << "I'm Xiaoluo." << endl;
        break;
    case 'N':
        cout << "I'm Xiaoluo." << endl;
        break;
    case 'S':
        cout << "Teinei teinei teinei~" << endl;
        break;
    case 'B':
    case 'Q':
        cout << "Bye bye!" << endl;
        break;
    default:
        cout << "Sorry..." << endl;
        break;
    }
    return 0;
}*/
