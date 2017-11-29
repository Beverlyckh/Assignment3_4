/*
 * reverseOrder.cpp
 *
 *  Created on: Oct 30, 2017
 *      Author: Beverly Ackah
 *      C++ program which reads a positive number and display the decimal digits of an integer in reverse order.
 */

#include <iostream>
using namespace std;

void  reverseDigits(int);

int main(){

	int inputNumber;
	cout <<"Enter a number:";
	cin >> inputNumber;
	cout<<"The reverse order is: " ;
	reverseDigits(inputNumber);

	return 0;
}

//This recursive function reverses the digits of a number
void reverseDigits(int number){
	if (number <= 0){
		return ;
	}

	if(number>0){
		cout<<(number%10);
		reverseDigits(number/10);
	}

}
