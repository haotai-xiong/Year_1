// Login: Harry Xiong C00265675
// Author: Harry Xiong C00265675
// Date: Nov.05.2020
//----------------------------------------------------
// Goal: Ask the users to input the battery size in kwh
//       Then use the battery size to calculate the cost of fully charging
//       How long they could travel in kilometers and miles
//----------------------------------------------------
// Estimated time: 5 mins
// Actual time: 13 mins
/* Known Bug:
    No Error checking on user input

*/

#include<iostream> // cout cin
using namespace std;

int main3()
{
    const double COSTPERKWH = 16.37;
    const double SEVENPERKWH = 7.0;
    const double KMTOMILE = 0.62;
    double cost = 0;
    double kwh = 0;
    double km = 0;
    double miles = 0;
    
    // Ask users to input the battery size in kwh
    cout << "Enter the battery size of your car in kwh: \n\n";
    cin >> kwh;

    // Calculate cost, km and miles
    cost = kwh * COSTPERKWH;
    km = kwh * SEVENPERKWH;
    miles = km * KMTOMILE;

    cout << "\nThe battery size of your car is " << kwh << " you can travel " << km << " kilometers and " << miles << " miles with once fully charging\n"
        << "The total cost for charging fully once is " << cost << " cents\n";

    system("Puase");
    return 0;
}
