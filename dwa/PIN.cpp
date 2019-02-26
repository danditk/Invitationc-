#include <iostream>

using namespace std;

string login, password;

int main()
{
    cout << "Hello in our Bank!!!" << endl;
    cout << "Please insert your login: " << endl;
    cin >> login;

    cout << "Please insert your password: ";
    cin >> password;

    if ((login == "admin") && (password == "nimda"))
    {
        cout << "Correct password : " << password << " and " << "login : " << login << ", gratulations!";
    }
    return 0;
}
