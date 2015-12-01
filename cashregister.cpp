/*
cashregister.cpp
Jun 17, 2015
*/
#include <iostream>
using namespace std;

 void printChange(int&, int&, int&, int&, int&);
 void findCoins(int&, int&, int&, int&, int&);

int main()
{
	int dollars, quarters, dimes, nickels, pennies;
	double payment;
	double price;
	char answer = 'y';
	string firstName, lastName, fullName;

	while (answer == 'y') {
		cout<<"Please enter the price of an item"<<endl;
		cin>>price;
		cout<<"Please enter your payment in dollars and cents"<<endl;
		cin>>payment;
		double change = payment - price;
		dollars = change;
		change = change*100;
		int coins = change - dollars*100;

		findCoins(coins, quarters, dimes, nickels, pennies);
		printChange(dollars, quarters, dimes, nickels, pennies);

		cout<<"Would you like to make another transaction?"<<endl;
		cin>>answer;
	}

	cout<<"Thank you for Shopping at Sahnun Cloud Technologies"<<endl;
	return 0;
}
	  void printChange(int& dol, int& q, int& d, int& n, int& p)
	  {
		cout<<"Dollars: "<<dol<<endl;
		cout<<"Quarters: "<<q<<endl;
		cout<<"Nickels: "<<n<<endl;
		cout<<"Dimes :"<<d<<endl;
		cout<<"Pennies :"<<p<<endl;
	}



	  void findCoins(int& coins, int& quarters, int& dimes, int& nickels, int& pennies)
{
	quarters = coins/25;
	dimes = coins % 25 / 10;
    nickels = coins % 25 % 10 / 5;
	pennies = coins % 25 % 10 % 5;

}




