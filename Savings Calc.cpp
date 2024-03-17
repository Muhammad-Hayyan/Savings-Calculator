/* MUHAMMAD HAYYAN
23I-2041____CY-A
Assignment#03___Q10 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
		//program to output balance in a saving account
	float amount, principal, rate, interest, x;
	int times;
	
		//Taking inputs
	cout<< "\nInterest rate:\t\t";
	cin>> rate;
	
	cout<< "\nTimes compounded:\t";
	cin>> times;
	
	cout<< "\nPrincipal:\t\t$ ";
	cin>> principal;
	
	
		//Calculations	
	rate = rate/100;
	amount = principal * pow(1 + rate/times,times);
	interest = amount - principal;
	
	
		//outputting calculations
	cout<< "\nInterest:\t\t$ "<<setprecision(2)<<fixed<<interest<<endl;
	cout<< "\nAmount in saving:\t$ "<<setprecision(2)<<fixed<<amount<<endl;
	
	return 0;
}
		
	
