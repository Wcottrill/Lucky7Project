//Wesley Cottrill
//1.13.2020
//CST-210
//This is my work

#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cout << "Please Enter 5 Integers:";
	cin >> a >> b >> c >> d >> e;

	int largest, smallest;


	if (a > b)largest = a;
	else largest = b;

	if (c > largest)largest = c;

	if (d > largest)largest = d;

	if (e > largest)largest = e;

	cout << "The largest number is:"<< largest << endl; 

	if (a < b)smallest = a;
	else smallest= b;

	if (c < smallest)smallest = c;

	if (d < smallest)smallest = d;

	if (e < smallest)smallest = e;
	cout << "The smallest number of the 5 is: " << smallest << endl;

	//Write a program that reads in 5 integers and prints the largest and the smallest of the group.
	return 0;
}