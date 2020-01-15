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

//Question 3
//__int64 factorial(__int64 n)
//{
//	return (n == 0 ? 1 : n * factorial(n - 1));
//}
//
//int main(int argc, char* argv[])
//{
//	for (int n = 0; n <= 10; n++)
//		printf("%d! = %I64d\n", n, factorial(n));
//	return 0;
//}

//Question 4
//int main() {
//    char string1[20];
//    int i, length;
//    int flag = 0;
//
//    cout << "Enter a string: "; cin >> string1;
//
//    length = strlen(string1);
//
//    for (i = 0;i < length;i++) {
//        if (string1[i] != string1[length - i - 1]) {
//            flag = 1;
//            break;
//        }
//    }
//
//    if (flag) {
//        cout << string1 << " is not a palindrome" << endl;
//    }
//    else {
//        cout << string1 << " is a palindrome" << endl;
//    }
//    system("pause");
//    return 0;
//}

//Question 5

int main()
{
    int n, i;
    bool isPrime = true;
    cout << "Please enter a positive integer good sir/madame: ";
    cin >> n;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "This is a ..... prime number";
    else
        cout << "This is ..... not a prime number";
    return 0;
}