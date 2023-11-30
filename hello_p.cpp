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

int main()
{
	cout << "Hello, Enter your name and age:\n";
	string first_name; // string variable definition
	int age; // integer variable definition
	cin >> first_name; // reading a string
	cin >> age; // reading an integer
	cout << "Hello, " << first_name << ", your age is " << age << " !\n";
	return 0;
}