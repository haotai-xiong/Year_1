// Login: Haotai Xiong C00265675
// Author: Haotai Xiong C00265675
// Date: Nov.11.2020
// Estimated time: 10 mins
// Actual time: 18 mins
/* Goal: Writing this project to ask people to input the money they have and the price of the item
		 Then calculate the changes, tell them how many different coins you would get back
*/
/* Known Bugs:
		No Input Error Checking
*/

#include<iostream> // cout cin
using namespace std;

int main()
{
	// claim the variables
	int enterMoney = 0;
	int cost = 0;
	int cent_50 = 0;
	int cent_20 = 0;
	int cent_10 = 0;
	int cent_5 = 0;
	int cent_2 = 0;
	int cent_1= 0;
	int leftMoney = 0;
	int changes = 0;

	// ask the users to input the money they have and the price of the item they would like to buy
	cout << "Amount of money entered(Integer): \n";
	cin >> enterMoney;
	cout << "\nItem chosen cost(Integer): \n";
	cin >> cost;

	// use if statement to ensure buyer have enough money to buy the item they select
	if (enterMoney > cost)
	{
		changes = enterMoney - cost; // changes in total
		cent_50 = changes / 50; // number of 50 cent coins
		leftMoney = changes % 50; // changes after taking 50 cent coins
		cent_20 = leftMoney / 20;  // number of 20 cent coins
		leftMoney = leftMoney % 20; // changes after taking 20 cent coins
		cent_10 = leftMoney / 10; // number of 10 cent coins
		leftMoney = leftMoney % 10; // changes after taking 10 cent coins
		cent_5 = leftMoney / 5; // number of 5 cent coins
		leftMoney = leftMoney % 5; // changes after taking 5 cent coins
		cent_2 = leftMoney / 2; // number of 2 cent coins
		leftMoney = leftMoney % 2; // changes after taking 2 cent coins
		cent_1 = leftMoney / 1; // number of 1 cent coin

		// display the result
		cout << "\nThe total changes are " << changes << " cents"
			<< "\nAnd the result of calculating how many coins to dispense would be: "
			<< "\nNumber of 50 cent coins is " << cent_50
			<< "\nNumber of 20 cent coins is " << cent_20
			<< "\nNumber of 10 cent coins is " << cent_10
			<< "\nNumber of 5 cent coins is " << cent_5
			<< "\nNumber of 2 cent coins is " << cent_2
			<< "\nNumber of 1 cent coins is " << cent_1 << endl;
	}

	// if money they have is less than the cost, they cannot buy it
	if (enterMoney < cost)
	{
		cout << "\nYou cannot afford this item\n";
	}

	system("Pause");
	return 0;
}