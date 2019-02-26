#include <iostream>

using namespace std;

string login, password;

int main()
{
    cout << "Hello user!" << endl;
    cout << "Please insert your login: " << endl;
    cin >> login;

    cout << "Please insert your password: " << endl;
    cin >> password;

    if ((login == "admin") && (password == "nimda"))
    {
        cout << "Your login: " << login << " and password: " << password << " is correct :)";
    }
    else
    {
        cout << "Sorry, your login or password is incorrect." << endl;
        cout << "Maybe try again :)";
    }

    return 0;
}
