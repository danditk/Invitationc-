#include <iostream>

using namespace std;

string PIN;

int main()
{
    cout << "Hello in our Bank!!!" << endl;
    cout << "Please insert Your PIN code: ";
    cin >> PIN;

    if (PIN == "1234")
    {
        cout << "Prawidlowy PIN :" <<PIN;
    }
    else
    {
        cout << "Podany PIN jest nieprawidlowy ;(" <<endl;
        cout << "Sprobuj jeszcze raz...";

    }

    return 0;
}
