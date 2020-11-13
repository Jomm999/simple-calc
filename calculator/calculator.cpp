#include <iostream>

using namespace std;

int main()
{
    int a;
    string b;
    int c;

    cout << "enter first number ";
    cin >> a;

    cout << "enter operator ";
    cin >> b;

    cout << "enter second number ";
    cin >> c;

    if (b == "+")
    {
        cout << a + c;
    }
    else if (b == "-")
    {
        cout << a - c;
    }
    else if (b == "*")
    {
        cout << a * c;
    }
    else 
    {
        cout << a / c;
    }
}