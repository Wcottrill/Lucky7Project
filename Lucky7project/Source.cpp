//Wesley Cottrill
//1.13.2020
//CST-210
//This is my work

#include <iostream>
using namespace std;

//int main() {
//	int a, b, c, d, e;
//	cout << "Please Enter 5 Integers:";
//	cin >> a >> b >> c >> d >> e;
//
//	int largest, smallest;
//
//
//	if (a > b)largest = a;
//	else largest = b;
//
//	if (c > largest)largest = c;
//
//	if (d > largest)largest = d;
//
//	if (e > largest)largest = e;
//
//	cout << "The largest number is:"<< largest << endl; 
//
//	if (a < b)smallest = a;
//	else smallest= b;
//
//	if (c < smallest)smallest = c;
//
//	if (d < smallest)smallest = d;
//
//	if (e < smallest)smallest = e;
//	cout << "The smallest number of the 5 is: " << smallest << endl;
//
//	//Write a program that reads in 5 integers and prints the largest and the smallest of the group.
//	return 0;
//}

//question 2
//int calculate_sum(int a, int N){
//	int m = N / a;
//
//	int sum = m * (m + 1) / 2;
//
//	int ans = a * sum;
//
//	return ans;
//}
//
//int main() {
//	int a = 7, N = 50;
//	cout << "Sum of multiples of  "
//		<< a << " up to " << N << " = "
//		<< calculate_sum(a, N) << endl;
//	return 0;
//}

__int64 factorial(__int64 n)
{
	return (n == 0 ? 1 : n * factorial(n - 1));
}

int main(int argc, char* argv[])
{
	for (int n = 0; n <= 10; n++)
		printf("%d! = %I64d\n", n, factorial(n));
	return 0;
}