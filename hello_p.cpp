#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
inline void keep_windy() { char ch; cin >> ch; }
//int main()
//{
//	cout << "Hello, programming!\nHere we go!";
//	keep_windy();
//	return 0;
//}

// input

//int main()
//{
//	cout << "Please enter your first name:\n";
//	string first_name; //definition
//	cin >> first_name;
//	cout << "Hello," << first_name << "!\n";
//}

// variables

// int:integer
// double: a floating-point number
// char: an individual character enclosed in single quotes
// string: sequence of characters delimited by double quotes
// bool: either true or false


// input and type

//int main()
//{
//	cout << "Hello, Enter your name and age:\n";
//	string first_name; // string variable definition
//	int age; // integer variable definition
//	cin >> first_name; // reading a string
//	cin >> age; // reading an integer
//	cout << "Hello, " << first_name << ", your age is " << age << " !\n";
//	return 0;
//}

// 2nd version
//int main()
//{
//	cout << "Hello, enter name and age:\n";
//	string f_n = "???";
//	int age = -1;
//	cin >> f_n >> age;
//	cout << "Hello, " << f_n << "( age " << age << ")!\n";
//}

// example
//int main()
//{
//	cout << "Please enter your name and age:\n";
//	string f_n; // variable definition
//	double age; // variable definition
//	cin >> f_n >> age;
//	cout << "Your name is " << f_n << " and you are " << age * 12 << " months old!";
//}

// Operations and operators

// simple program to exercise operators
int main()
{
	cout << "Please enter a floating-point value:\n";
	double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << n * 3
		<< "\nn twice == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n";
}