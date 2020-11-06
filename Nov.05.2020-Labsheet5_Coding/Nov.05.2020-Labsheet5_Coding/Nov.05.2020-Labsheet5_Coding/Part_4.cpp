// Login: Harry Xiong C00265675
// Author: Harry Xiong C00265675
// Date: Nov.05.2020
//----------------------------------------------------
// Goal: Ask the users to input the battery size in kwh and how many kilometers they want to travel
//       Then calculate how many times they need to charge, and calculate the cost of this travel
//----------------------------------------------------
// Estimated time: 5 mins
// Actual time: 15 mins
/* Known Bug:
    No Error checking on user input

*/

#include<iostream> // cout cin
using namespace std;

int main4()
{
    const double COSTPERKWH = 16.37;
    const double SEVENPERKWH = 7.0;
    double cost = 0;
    double kwh = 0;
    double km = 0;
    int time = 0;

    // Ask the users to input the battery size in kwh and how many kilometers they want to travel
    cout << "What is the battery size of your car in kwh: \n\n";
    cin >> kwh;
    cout << "\nHow many kilometers you would like to travel: \n\n";
    cin >> km;

    // Calculate the cost and how many times they need to recharge
    time = km / (kwh * SEVENPERKWH);
    cost = kwh * COSTPERKWH * time;

    cout << "\nYour battery size in kwh is " << kwh << " and you need to charge " << time << " time(s) to travel " << km << " kilometers\n"
        << "The total cost of this travel is " << cost << " cents\n\n";

    system("Pause");
    return 0;
}