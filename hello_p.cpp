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
//int main()
//{
//	cout << "Please enter a floating-point value:\n";
//	double n;
//	cin >> n;
//	cout << "n == " << n
//		<< "\nn+1 == " << n + 1
//		<< "\nthree times n == " << n * 3
//		<< "\nn twice == " << n + n
//		<< "\nn squared == " << n * n
//		<< "\nhalf of n == " << n / 2
//		<< "\nsquare root of n == " << sqrt(n)
//		<< "\n";
//}

// try-this 
//int main()
//{
//	cout << "enter an integer number:\n";
//	int n;
//	cin >> n;
//	double n_fl = n;
//	cout << "n == " << n
//		<< "\nmodulo of n 2 == " << n % 2
//		<< "\nsquare root of n == " << sqrt(n_fl)
//		<< "\n";
//}

// simple practice
//int main()
//{
//	cout << "Enter your first name and second name: \n";
//	string first;
//	string second;
//	cin >> first >> second;
//	string name_full = first + ' ' + second;
//	cout << "Your name is " << name_full << "!\n";
//	keep_windy();
//}

// simple practice
//int main()
//{
//	cout << "Enter your name:\n";
//	string first;
//	string second;
//	cin >> first >> second;
//	if (first == second)
//		cout << "your first name is the same with your second"<<"\n";
//	if (first > second)
//		cout << first << " is alphabetically greater than " << second <<"\n";
//	if (first < second)
//		cout << first << " is alphabetically less than " << second << "\n";
//	cout << "your name is " << first << " " << second << "! \n";
//	keep_windy();
//}

// assignment and initialization
// an example for detecting repeated words

//int main() {
//	string previous = " "; // initializing the variable previous
//	string current; // init current variable
//	while (cin >> current) {
//		if (current == previous) {
//			cout << "repeated previous word: " << current << "\n";
//
//		}
//		previous = current; // assigning current to previous
//	}
//}

// Composite assignment operators

//int main(){
//	int word_numbers = 0; // init number of words
//	string previous = " ";
//	string current;
//	while (cin >> current) {
//		++word_numbers;
//		if (current == previous) {
//			cout << "\nword count: " << word_numbers << "\n"
//				<< "repeated words: " << current << "\n";
//		}
//		previous = current;
//	}
//}

// Names

int main() {
	string s = "Goodbye, cruel world!";
	cout << s << "\n";
	return 0;
}

// Types and objects

// type: a set of all possible values and a set of all possible operations
// object: some memory for a value of certain type
// value: a set of bits interpreted by their type
// variable: a named object
// definition: declaration that set aside some memory for an object
// declaration: statement that gives a name to an object

// Type safety

