#include <iostream>

using namespace std;

int old;

int main()
{
    cout << "How old are U?" << endl;
    cin >> old;

    if (old  < 18)
    {
        cout<<"In Poland - you aren't of age," <<endl <<"so U can't start for be the President in Poland ;(";
    }

    else if ((old  >= 18) && (old < 35))
    {
        cout<<"In Poland - you are of age :)," <<endl <<"but U're your age is not enough to be the President :(";
    }
    else
    {
        cout<<"In Poland - you are of age :)." <<endl;
        cout<<"If its not enough for U... You can start for be the president :D!";
    }

    return 0;
}
