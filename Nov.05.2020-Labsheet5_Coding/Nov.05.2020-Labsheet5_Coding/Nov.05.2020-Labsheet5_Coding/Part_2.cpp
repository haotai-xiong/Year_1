// Login: Harry Xiong C00265675
// Author: Harry Xiong C00265675
// Date: Nov.05.2020
//----------------------------------------------------
// Goal: Ask the users to input the kilometers that they want to travel without charging
//       Then use kilometers to calculate the battery size
//----------------------------------------------------
// Estimated time: 5 mins
// Actual time:8 mins
/* Known Bug:
    No Error checking on user input

*/

#include<iostream> // cout cin
using namespace std;

int main2()
{
    const int SEVENKMPERKWH = 7;
    double kwh = 0;
    int km = 0;

    // Ask users to input how long they would like to travel without charging
    cout << "How long would you like to travel by your car without charging: \n\n";
    cin >> km;

    // Calculate the battery size in kwh
    kwh = km % SEVENKMPERKWH;
    cout << "\nThe battery size of your car should be " << kwh << " kWh to travel " << km << " kilometers without charging\n";

    system("Puase");
    return 0;
}