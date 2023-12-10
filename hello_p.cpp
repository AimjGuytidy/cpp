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

//int main() {
//	string s = "Goodbye, cruel world!";
//	cout << s << "\n";
//	return 0;
//}

// Types and objects

// type: a set of all possible values and a set of all possible operations
// object: some memory for a value of certain type
// value: a set of bits interpreted by their type
// variable: a named object
// definition: declaration that set aside some memory for an object
// declaration: statement that gives a name to an object

// Type safety

// always initialize variables!



// Safe conversions

//int main() {
//	char c = 'x';
//	int int1 = c;
//	char c1 = int1;
//	cout << c << int1 << c1;
//}

// unsafe conversions

/*int main() {
	int a = 2000;
	char b = a;
	int c = b;
	if (a != b)
		cout << "Ouups!: " << a << " != " << c;
	else
		cout << "we have a great reader!";
}*/ // this type of conversion is called narrowing conversion

// example

//int main() {
//	double d = 0;
//	while (cin >> d) {
//		int i = d;
//		char c = i;
//		int k = c;
//		cout << "\nd == " << d
//			<< "\ni == " << i
//			<< "\nc == " << c
//			<< "\nk == " << k
//			<< "\nchar( " << c << " )\n";
//	}
//
//}

// use {} initializers to avoid narrowing!!
// {}: universal and uniform initialization


// end of chapter drill and exercises

//int main() {
//	cout << "Enter the name of the person you want to write to: \n";
//	string first_name;
//	cin >> first_name;
//	cout << "Dear " << first_name << ",\n"
//		<< "How are you? I am fine. I miss you.\n"
//		<< "Last night, I dreamt about the good times we had.\n";
//	cout << "Enter the name of your other friend: \n";
//	string friend_name;
//	cin >> friend_name;
//	cout << "\nHave you seen " << friend_name << " lately?\n";
//	char friend_sex = '0';
//	cout << "\nEnter friend sex (m if male and f if female): ";
//	cin >> friend_sex;
//	if (friend_sex == 'm')
//		cout << "If you see " << friend_name << " please ask him to call me.\n";
//	if (friend_sex == 'f')
//		cout << "If you see " << friend_name << " please ask her to call me.\n";
//	cout << "\nEnter the age of the recipient: \n";
//	int age = 0;
//	cin >> age;
//	if (age > 0 and age < 110) {
//		cout << "\nI hear you just had a birthday and you are "
//		<< age << " years old.";
//	if (age < 12 and age > 0) {
//		cout << "\nNext year you will be "
//		<< age + 1
//		<< ".";
//
//	}
//	if (age == 17) {
//		cout << "\nNext year you will be able to vote.";
//	}
//	if (age > 70 and age < 110) {
//		cout << "\nI hope you are enjoying retirement.";
//	}
//	}
//	else
//		cout << "\nyou're kidding! ";
//	cout << "\nYours sincerely,"
//		<< "\n"
//		<< "\n"
//		<< "Parfait";
//	keep_windy();
//}

// m-to-km converter
/*int main() {
	cout << "Enter a number of miles: \n";
	double miles_entered = 0.0;
	cin >> miles_entered;
	cout << "\nMiles entered ( "
		<< miles_entered
		<< " miles ) are equivalent to "
		<< miles_entered * 1.609
		<< " km.";
	keep_windy();
}*/

// program that doesn't do anything
/*
int main() {
	//int double = 0;
	int doubl = 0;
}
*/

// program that compare 2 integer variables
/*int main() {
	cout << "Enter 2 integers: \n";
	int val1 = 0;
	int val2 = 0;
	cin >> val1
		>> val2;
	if (val1 != val2) {
		if (val1 > val2)
			cout << val1
			<< " is greater than "
			<< val2
			<< ". thus it is the largest and "
			<< val2
			<< " is the smallest.\n";
		else
			cout << val1
			<< " is less than "
			<< val2
			<< ". thus it is the smallest and "
			<< val2
			<< " is the largest.\n";
	}
	else
		cout << val1
		<< " is equal to "
		<< val2
		<< ".\n";
	cout << "\nthe sum is "
		<< val1 + val2
		<< ".\n"
		<< "\nthe difference is "
		<< abs(val1 - val2)
		<< ".\n"
		<< "\nthe product is "
		<< val1 * val2
		<< ".\n";
	double ratio = val1/val2;

	cout << "\nthe ratio is "
		<< ratio
		<< ".\n";
	keep_windy();
}*/

//int main() {
//	cout << "Enter 2 numbers: \n";
//	double val1 = 0.0;
//	double val2 = 0.0;
//	cin >> val1
//		>> val2;
//	if (val1 != val2) {
//		if (val1 > val2)
//			cout << val1
//			<< " is greater than "
//			<< val2
//			<< ". thus it is the largest and "
//			<< val2
//			<< " is the smallest.\n";
//		else
//			cout << val1
//			<< " is less than "
//			<< val2
//			<< ". thus it is the smallest and "
//			<< val2
//			<< " is the largest.\n";
//	}
//	else
//		cout << val1
//		<< " is equal to "
//		<< val2
//		<< ".\n";
//	cout << "\nthe sum is "
//		<< val1 + val2
//		<< ".\n"
//		<< "\nthe difference is "
//		<< abs(val1 - val2)
//		<< ".\n"
//		<< "\nthe product is "
//		<< val1 * val2
//		<< ".\n";
//	double ratio = val1 / val2;
//
//	cout << "\nthe ratio is "
//		<< ratio
//		<< ".\n";
//	keep_windy();
//}

// sorting numbers

//int main() {
//	cout << "Please enter 3 integers: \n";
//	int i1 = 0;
//	int i2 = 0;
//	int i3 = 0;
//	cin >> i1 >> i2 >> i3;
//	if (i1 >= i2 and i2 >= i3)
//		cout << i1 << ", " << i2 << ", " << i3 << "\n";
//	if (i1 <= i2 and i2 <= i3)
//		cout << i3 << ", " << i2 << ", " << i1 << "\n";
//	if (i1 >= i3 and i3 >= i2)
//		cout << i1 << ", " << i3 << ", " << i2 << "\n";
//	if (i1 <= i3 and i3 <= i2)
//		cout << i2 << ", " << i3 << ", " << i1 << "\n";
//	if (i1 <= i2 and i1 >= i3)
//		cout << i2 << ", " << i1 << ", " << i3 << "\n";
//	if (i3 >= i1 and i1 >= i2)
//		cout << i3 << ", " << i1 << ", " << i2 << "\n";
//	keep_windy();
//	
//}

//
//int main() {
//	cout << "Please enter 3 words: \n";
//	string i1 = " ";
//	string i2 = " ";
//	string i3 = " ";
//	cin >> i1 >> i2 >> i3;
//	if (i1 >= i2 and i2 >= i3)
//		cout << i1 << ", " << i2 << ", " << i3 << "\n";
//	if (i1 <= i2 and i2 <= i3)
//		cout << i3 << ", " << i2 << ", " << i1 << "\n";
//	if (i1 >= i3 and i3 >= i2)
//		cout << i1 << ", " << i3 << ", " << i2 << "\n";
//	if (i1 <= i3 and i3 <= i2)
//		cout << i2 << ", " << i3 << ", " << i1 << "\n";
//	if (i1 <= i2 and i1 >= i3)
//		cout << i2 << ", " << i1 << ", " << i3 << "\n";
//	if (i3 >= i1 and i1 >= i2)
//		cout << i3 << ", " << i1 << ", " << i2 << "\n";
//	keep_windy();
//
//}

// Testing odd or even integers

int main() {
	cout << " Please enter an integer: \n";
	int  i1 = 0;
	cin >> i1;
	if (i1 % 2 == 0)
		cout << "The value " << i1 << " is an even number.\n";
	else
		cout << "The value " << i1 << " is an odd number.\n";
	keep_windy();
}