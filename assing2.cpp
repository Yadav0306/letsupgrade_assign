#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "enter a number" << endl;
    cin >> a;
    for (int i = 0; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}