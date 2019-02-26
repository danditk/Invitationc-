#include <iostream>

using namespace std;


int ilosc_uczniow, ilosc_cukierkow_od_M, x, y;

int main()
{
    cout << "Ilu uczniow liczy Twoja klasa? : ";
    cin >> ilosc_uczniow;

    cout << "Ile cukierkow kupila mamam? : ";
    cin >> ilosc_cukierkow_od_M;

    x = ilosc_cukierkow_od_M / (ilosc_uczniow -1);
    cout << "Cukierkow dla uczniow jest po: " <<x <<" dla kazdego" << endl;

    y = ilosc_cukierkow_od_M - x * (ilosc_uczniow-1);
    cout << "A dla Jasia zostalo: " <<y <<" cuksow" ;

    return 0;
}
