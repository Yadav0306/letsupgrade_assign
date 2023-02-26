#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    if (a > b)
    {
        cout << a << " is greater" << endl;
    }
    else if (a < b)
    {
        cout << b << " is greater" << endl;
    }
    else if (a == b)
    {
        cout << "both are equal" << endl;
    }
    else
    {
        cout << "error" << endl;
    }

    return 0;
}