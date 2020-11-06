// Login: Harry Xiong C00265675
// Author: Harry Xiong C00265675
// Date: Nov.05.2020
//----------------------------------------------------
// Goal: Ask the users to input the battery size in kwh
//       Then use the size of battery to calculate how far they could travel
//----------------------------------------------------
// Estimated time: 5 mins
// Actual time:8 mins
/* Known Bug:
    No Error checking on user input

*/

#include<iostream> // cout cin
using namespace std;

int main1()
{
    const int SEVENKMPERKWH = 7;
    double kwh = 0;
    double km = 0;

    // Ask users to input the battery size of their own cars
    cout << "Enter the battery size of your car in kwh: \n\n";
    cin >> kwh;

    // Calculate how far their cars can drive
    km = kwh * SEVENKMPERKWH;
    cout << "\nThe battery size of your car is " << kwh << " and it can travel " << km << " kilometers\n";

    system("Puase");
    return 0;
}