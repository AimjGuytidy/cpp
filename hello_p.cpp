#include <iostream>
#include <string>
#include <sstream>
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
	if (a != c)
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

//int main() {
//	cout << " Please enter an integer: \n";
//	int  i1 = 0;
//	cin >> i1;
//	if (i1 % 2 == 0)
//		cout << "The value " << i1 << " is an even number.\n";
//	else
//		cout << "The value " << i1 << " is an odd number.\n";
//	keep_windy();
//}

// converting spelled out numbers

//int main() {
//	cout << "Please enter a spelled out number: \n";
//	string s1 = " ";
//	cin >> s1;
//	if (s1 == "zero")
//		cout << "The digit equivalent is 0.\n";
//	if (s1 == "one")
//		cout << "The digit equivalent is 1.\n";
//	if (s1 == "two")
//		cout << "The digit equivalent is 2.\n";
//	if (s1 == "three")
//		cout << "The digit equivalent is 3.\n";
//	if (s1 == "four")
//		cout << "The digit equivalent is 4.\n";
//	else
//		cout << "not a number I know!\n";
//	keep_windy();
//}

// operations and operands

//int main() {
//	cout << "Enter operation followed by operands: \n";
//	string operation = " ";
//	double operand1 = 0.0;
//	double operand2 = 0.0;
//	cin >> operation >> operand1 >> operand2;
//	if (operation == "+")
//		cout << "The result is: " << operand1 + operand2 << "\n";
//	if (operation == "*")
//		cout << "The result is: " << operand1 * operand2 << "\n";
//	if (operation == "-")
//		cout << "The result is: " << operand1 - operand2 << "\n";
//	if (operation == "/")
//		cout << "The result is: " << operand1 / operand2 << "\n";
//	else
//		cout << "The operation entered is not recognized by the program!\n";
//	keep_windy();
//}

// cents conversion

//int main() {
//	cout << "How many pennies do you have?\n";
//	double penny = 0;
//	cin >> penny;
//	if (penny > 1)
//		cout << "You have " << penny << " pennies.\n";
//	else
//		cout << "You have " << penny << " penny.\n";
//
//	cout << "How many nickels do you have?\n";
//	double nickel = 0;
//	cin >> nickel;
//	if (nickel > 1)
//		cout << "You have " << nickel << " nickels.\n";
//	else
//		cout << "You have " << nickel << " nickel.\n";
//	
//	cout << "How many dimes do you have?\n";
//	double dime = 0;
//	cin >> dime;
//	if (dime > 1)
//		cout << "You have " << dime << " dimes.\n";
//	else
//		cout << "You have " << dime << " dime.\n";
//	
//	cout << "How many quarters do you have?\n";
//	double quarter = 0;
//	cin >> quarter;
//	if (quarter > 1)
//		cout << "You have " << quarter << " quarters.\n";
//	else
//		cout << "You have " << quarter << " quarter.\n";
//	
//	cout << "How many half dollars do you have?\n";
//	double half_dollar = 0;
//	cin >> half_dollar;
//	if (half_dollar > 1)
//		cout << "You have " << half_dollar << " half dollars.\n";
//	else
//		cout << "You have " << half_dollar << " half dollar.\n";
//	double total_cents = (penny)+(nickel * 5) + (dime * 10) + (quarter * 25) + (half_dollar * 50);
//	if (total_cents >= 100)
//		cout << "The value of all of your coins is $" << total_cents / 100 << ".\n";
//	if (total_cents > 1 and total_cents < 100)
//		cout << "The value of all of your coins is " << total_cents << " cents.\n";
//	if (total_cents < 1)
//		cout << "The value of all of your coins is " << total_cents << " cent.\n";
//	keep_windy();
//
//
//}

// chapter 4: computation

// computation

// inputs : arguments
// outputs : results
// computation: act of producing outputs based on a set of inputs

// Objectives and tools

// correctly; simply; efficiently

// Expressions

//int main() {
//	int length = 20; // a literal integer
//	int width = 40; // put 40 into the object named by "width"
//	int area = length * width;
//	cin >> length >> width;
//	cout << "The area is " << area << ".\n";
//	keep_windy();
//}

// // constant expressions

//constexpr double pi = 3.14159265359; // a literal is a constant expression
// magic constants: non-obvious literals in code!! 
// use const for variables that are not constant expressions but don't change values
// after initialization.

// // operators


// // conversions
//int main() {
//	double d = 2.5;
//	int i = 3;
//	cout << d / i << " " << 'a' + 1;
//}

// type{value} avoids narrowing
// type(value) converts with narrowing risk

//int main() {
//	double d = 2.5;
//	int i = 2;
//
//	double d2 = d / i; // this means that i becomes double(i)
//	int i2 = d / i; // here there will be narrowing d becomes 2
//	//int i3{ d / i }; // error due to narrowing
//
//	i2 = d / i;
//	d2 = d / i;
//	cout << "integer: " << i2 << " double: " << d2;
//}

//int main() {
//	// converting celsius to fahrenheit
//	double dc;
//	cin >> dc;
//	double df = 9 / 5.0 * dc + 32;// make sure one of 9 or 5 is a double type
//	cout << "\n" << dc << " degrees celsius are equivalent to degree fahrenheit " << df;
//}

// Statements

// empty statement eg: if (x == 5); the semicolon makes it empty

// // selection
// // // if-statements

//int main() {
//	int a = 0; // initialization
//	int b = 0; // initialization
//	cout << "Enter two different integers: \n";
//	cin >> a >> b;
//	if (a > b)
//		cout << "max(" << a << ", " << b << ") = " << a;
//	else
//		cout << "max(" << a << ", " << b << ") = " << b;
//	keep_windy();
//}

//int main() {
//	constexpr double cm_per_inch = 2.54;
//	double length = 1;
//	char unit = ' ';
//
//	cout << "Please enter length and unit (c or i): \n";
//	cin >> length >> unit;
//	if (unit == 'i')
//		cout << "length == " << length * cm_per_inch << " cm.\n";
//	else if (unit == 'c') // this doesn't mean else-if! it means else statement with if nested!!!
//		cout << "length == " << length / cm_per_inch << " in.\n";
//	else
//		cout << "Sorry, I don't know a unit called " << unit << ".\n";
//	keep_windy();
//}

// currency conversion

//int main() {
//	constexpr double yen_to_dollars = 0.0068;
//	constexpr double euro_to_dollars = 1.08;
//	constexpr double pound_to_dollars = 1.26;
//	double amount = 0;
//	char currency = ' ';
//	cout << "Please enter amount and currency (y,e or p): \n";
//	cin >> amount >> currency;
//	if (currency == 'y')
//		cout << fixed
//			 << amount << " yens are equivalent to " << amount * yen_to_dollars << " dollars.\n";
//	else if (currency == 'e')
//		cout << fixed
//			 << amount << " euros are equivalent to " << amount * euro_to_dollars << " dollars.\n";
//	else if (currency == 'p')
//		cout << fixed
//			 << amount << " pounds are equivalent to " << amount * pound_to_dollars << " pounds.\n";
//	else
//		cout << fixed
//			 << "the currency " << currency << " used is not known by the program!\n";
//	keep_windy();
//
//}

// // // switch-statements

//int main() {
//	constexpr double yen_to_dollars = 0.0068;
//	constexpr double euro_to_dollars = 1.08;
//	constexpr double pound_to_dollars = 1.26;
//	double amount = 0;
//	char currency = ' ';
//	cout << "Please enter amount and currency (y,e or p): \n";
//	cin >> amount >> currency;
//	switch(currency) {
//	case 'y':
//		cout << fixed
//			 << amount << " yens are equivalent to " << amount * yen_to_dollars << " dollars.\n";
//		break;
//	case 'e':
//		cout << fixed
//			 << amount << " euros are equivalent to " << amount * euro_to_dollars << " dollars.\n";
//		break;
//	case 'p':
//		cout << fixed
//			 << amount << " pounds are equivalent to " << amount * pound_to_dollars << " pounds.\n";
//		break;
//	default:
//		cout << fixed
//			 << "the currency " << currency << " used is not known by the program!\n";
//		break;
//	}
//	keep_windy();
//}

// // // // switch technicalities

// you can't switch on a string (must be int, char or enumerate)
// you can't use a variable in a case label!
// you can't use the same case label twice
// you can use several case labels for single case
// use break; at the end of each case

// use of several cases

//int main() {
//	char a = ' ';
//	cout << "Please enter a digit: \n";
//	cin >> a;
//	switch (a)
//	{
//	case '0': case '2': case '4': case '6': case '8':
//		cout << "You have entered an even number.\n";
//		break;
//	case '1': case '3': case '5': case '7': case '9':
//		cout << "You have entered an odd number.\n";
//		break;
//	default:
//		cout << "You did not enter a digit!\n";
//		break;
//	}
//	keep_windy();
//}

// // iteration

// // // while-statements

//int main() {
//	cout << " A program to print a simple list of squares: \n";
//	int i = 0; // a loop variable initialized
//	while (i < 100)
//	{
//		cout << "\n" << i << "^2 == " << i * i;
//		++i; // increment the loop variable i
//	}
//	keep_windy();
//
//}

// a program that displays alphabet letters and their numeric values

//int main() {
//	cout << " A program to print alphabetic letters: \n";
//	int i = 0; // a loop variable initialized
//	while (i < 26)
//	{
//		cout << "\n" << char('a' + i) << "\t" << int('a' + i);
//		++i; // increment the loop variable i
//	}
//	keep_windy();
//
//}

// // // blocks

// block: a sequence of statements delimited by curly braces {}

// // for statements

//int main() {
//	
//	for (int i = 0; i < 100; ++i) {
//		cout << i << "\t" << i * i << "\n";
//	}
//}

// a for-statement is always equivalent to a while statement.

//int main() {
//
//	for (int i = 0; i < 100; ++i) {
//		cout << i << "\t" << i * i << "\n";
//		++i; // this would mean we only consider even numbers?
//	}
//}


// exercise

//int main() {
//	for (int i = 0; i < 26; ++i) {
//		cout << char('a' + i) << "\t" << int('a' + i) << "\n";
//	}
//	cout << "\n";
//	for (int i = 0; i < 26; ++i) {
//		cout << char('A' + i) << "\t" << int('A' + i) << "\n";
//	}
//}

// Functions

// function: a named sequence of statements

int square(int x) { // create a function to calculate squares!
	return x * x;
}

//int main() {
//	cout << "The square of 2 is " << square(2) << ".\n"; // using the created function.
//}

// type identifier (parameter-list) function-body

// function that returns nothing

void nono() {
	cout << "Nothing to return!\n";
}

//int main() {
//	nono();
//}

// // why bother with functions

// attempting to write a square root function

//double sqrt_par(double x) {
//	for (double t = 0; t < 10000000000; ++t)
//	{
//		if (t * t == x) {
//			return t;
//		}
//	}
//}
//
//int main() {
//	for (int i = 0; i < 32; ++i)
//	{
//		cout << fixed
//			 << i << "\t" << sqrt_par(i) << "\n";
//	}
//}

// Attempting to write square root function using Newton-Raphson method

double sqrt_newton(double x) {
	if (x == 0.0) {
		cerr << "You have entered 0!\n";
		return 0.0;
	}
	double guess = x / 2.0;
	for (int i = 0; i < 1000000; ++i) {
		guess = 0.5 * (guess + (x / guess));
	}
	return guess;
}

//int main() {
//	for (int i = 0; i < 3600; ++i) {
//		cout << fixed
//			<< i << "\t" << sqrt_newton(i) << "\n";
//	}
//}


// simplified square loop

// create a void function to print squares

void print_squares(int v) {
	cout << v << "\t" << v * v << "\n";
}

//int main() {
//	for (int i = 0; i < 100; ++i) print_squares(i);
//}

// try this : square function the archaic way!
int sqq(int x) {
	const int temp = x;
	if (x == 0) {
		return 0;
	}
	else if (x == 1) {
		return 1;
	}
	else if (x == 2) {
		return 4;
	}
	else 
	{
		for (int i = 0; i < (temp - 1); ++i)
		{
			x += temp;
		}
		return x;
	}
	
}

//int main() {
//	for (int i = 0; i < 9; ++i) {
//		cout << i << "\t" << sqq(i) << "\n";
//	}
//}

// // function declarations

// eg: int square(int); // a declaration of square 
// eg: double sqrt(double); // a declaration of square root

// vector

// vector: a sequence of elements that you can access by an index

//int main() {
//	cout << "Examples of vectors: \n";
//	vector <int> v = { 2,4,6,8,10 };//even numbers vector initialized
//	vector <string> friends = { "Parfait", "Par", "Pape" };//string vector initialized
//	vector <int> ve(4);// initialized an empty integer vector of size 4
//	vector <string> vs(3);// initialized an empty string vector of size 3
//	cout << "\nLet's check out some values of the vectors: \n"
//		<< "\nthe third value of vector v is "
//		<< v[2] << "\n"
//		<< "\nthe first value of vector friend is "
//		<< friends[0];
//	keep_windy();
//
//}


// // traversing a vector

//int main() {
//	vector <int> vi = { 1,2,4,3,21,53 }; // initialized a vector vi
//	cout << "Our vector is of size " << vi.size() << ".\n";
//
//	for (int i = 0; i < vi.size(); ++i) {
//		cout << vi[i] << "\n";
//	}
//	keep_windy();
//}

// range for loop

//int main() {
//	vector <string> vs = { "kaka", "pepe", "papa" };
//	for (string x : vs) {
//		cout << x << "\t";
//	}
//	keep_windy();
//}

// // growing a vector

// push_back(): adds new element to a vector

// push_back ==> member-function-call

// object_name.member-function-call(argument-list)

//int main() {
//	vector <double> vd;
//	double k = 0;
//	double i = 0;
//	double b = 0;
//	cout << "before assigning values to vector vd, its size was " << vd.size() << ".\n"
//		 << "\nnow enter 3 numeric values that we will assign to the vector vd: \n";
//	cin >> k >> i >> b;
//	vd.push_back(k);
//	cout << "\nnow the size of vd becomes " << vd.size() << ".\n";
//	vd.push_back(i);
//	cout << "\nnow the size becomes " << vd.size() << "\n";
//	vd.push_back(b);
//	cout << "\nnow the size becomes " << vd.size() << "\n";
//	for (double x : vd) {
//		cout << "\n"
//			<< x;
//	}
//	keep_windy();
//
//}

// numeric example

//int main() {
//	vector <double> temps;
//	cout << "Enter temperatures in dc: \n";
//	for (double temp; cin >> temp;) {
//		temps.push_back(temp);
//	}
//	for (double x : temps) {
//		cout << x << "\n";
//	}
//}

//int main() {
//	vector <double> temps;
//	double temp = 0;
//	while (cin >> temp) {
//		temps.push_back(temp);
//	}
//	for (double x : temps) {
//		cout << x << "\n";
//	}
//	double sums = 0;
//	for (double x : temps) {
//		sums += x;
//	}
//	cout << "\nThe sum is: " << sums
//		<< "\nThe mean is: " << sums / double(temps.size());
//	sort(temps.begin(), temps.end());
//	cout << "\nThe median is: " << temps[temps.size() / 2] << "\n";
//
//}

// sorting int vector manually

// create a void function
void bubblesort(vector <double>& vec) {
	// define vector size variable
	int n = vec.size();
	for (int i = 0; i < n-1 ; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (vec[j] >= vec[j + 1]) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;

			}
		}
	}
}

// let's test the function
//int main() {
//	vector <int> tester = { 0,9,2,4,1,6,3,2,7,2,8 };
//	bubblesort(tester);
//	for (int x : tester) {
//		cout << x << "\n";
//	}
//}

// A text example

// creating a simple dictionary

//int main() {
//	vector <string> dictionary;
//	for (string temp; cin >> temp;) {
//		dictionary.push_back(temp);
//	}
//	cout << "\nNumber of words: " << dictionary.size() << "\n";
//	sort(dictionary.begin(), dictionary.end());
//
//	for (int i = 0; i < dictionary.size(); ++i) {
//		if (i == 0 || dictionary[i-1] != dictionary[i]) {
//			cout << dictionary[i] << "\n";
//		}
//	}
//	keep_windy();
//}

// bleeping exercise

//int main() {
//	vector <string> lyrics;
//	cout << "\nType in your favorite lyrics uncensored: \n";
//	for (string temp; cin >> temp;) {
//		lyrics.push_back(temp);
//	}
//	for (int i = 0; i < lyrics.size(); ++i) {
//		if (lyrics[i] == "niggas" || lyrics[i] == "motherfuckers" || lyrics[i] == "shit") {
//			lyrics[i] = "BLEEP";
//		}
//	}
//	for (string x : lyrics) {
//		cout << x << "\s";
//	}
//	keep_windy();
//}

// Language features

// Drills!!!

//int main() {
//	int var1 = 0;
//	int var2 = 0;
//	char term;
//	cout << "Please enter 2 integers: \n";
//	while (cin >> var1 >> var2) {
//		cout << var1 << "\n" << var2;
//		
//	}
//	cin >> term;
//	if (term == '|') {
//		return 0;
//	}
//}

//int main() {
//	double var1 = 0.0;
//	double var2 = 0.0;
//	char term;
//	cout << "Please enter 2 numbers: \n";
//	while (cin >> var1 >> var2) {
//		if (var1 != var2)
//		{
//			cout << "The smaller value is: \n"
//				<< fixed
//				<< min(var1, var2)
//				<< "\nThe larger value is:\n"
//				<< max(var1, var2)
//				<< "\n";
//			if (abs(var1 - var2) < 1.0 / 100) {
//				cout << "The numbers are almost equal.\n";
//			}
//		}
//		else
//			cout << "\nThe numbers are equal\n";
//
//	}
//	cin >> term;
//	if (term == '|') {
//		return 0;
//	}
//}

//int main() {
//	double var1 = 0.0;
//	vector <double> temp;
//	char term;
//	cout << "Please enter 2 numbers: \n";
//	while (cin >> var1) {
//		temp.push_back(var1);
//		bubblesort(temp);
//		if (temp[0] != temp[temp.size() - 1])
//		{
//			cout << "The smaller value so far: \n"
//				<< fixed
//				<< temp[0]
//				<< "\nThe larger value so far:\n"
//				<< temp[temp.size()-1]
//				<< "\n";
//			if (abs(temp[0] - temp[temp.size() - 1]) < 1.0 / 100) {
//				cout << "The numbers are almost equal.\n";
//			}
//		}
//		
//		else
//			cout << "\nThe numbers are equal\n";
//		
//
//	}
//	cin >> term;
//	if (term == '|') {
//		return 0;
//	}
//}

//int main() {
//	double var1 = 0.0;
//	double var2 = 0.0;
//	string unit = "cm";
//	vector <double> temp;
//	string terms;
//	char term;
//	cout << "Please enter 2 numbers: \n";
//	while (cin >> var1 >> unit) {
//		if (unit == "m" || unit == " m")
//		{
//			var2 = var1 * 100;
//			temp.push_back(var2);
//			cout << "the converted value is: \n"
//				<< var2 << " cm\n";
//		}
//		else if (unit == "cm" || unit == " cm")
//		{
//			var2 = var1;
//			temp.push_back(var2);
//			cout << "the converted value is: \n"
//				<< var2 << " cm\n";
//		}
//		else if (unit == "in" || unit == " in")
//		{
//			var2 = var1 * 2.54;
//			temp.push_back(var2);
//			cout << "the converted value is: \n"
//				<< var2 << " cm\n";
//		}
//		else if (unit == "ft" || unit == " ft")
//		{
//			var2 = var1 * 2.54 * 12;
//			temp.push_back(var2);
//			cout << "the converted value is: \n"
//				<< var2 << " cm\n";
//		}
//			
//		else
//		{
//			cerr << "The used unit is not recognized by the program!\n";
//		}
//		
//
//	}
//	bubblesort(temp);
//	double sum = 0.0;
//	for (double x : temp) {
//		sum += x;
//	}
//	
//	cout << "The smallest value is:\n"
//		<< temp[0] << " cm\n\n"
//		<< "The largest value is: \n"
//		<< temp[temp.size() - 1] << " cm\n\n"
//		<< "The sum of all the entered values is: \n"
//		<< sum << " cm\n\n\n";
//	for (double x : temp)
//		cout << x << "\n";
//	
//}

// calculating median
//int main() {
//	vector <double> vec;
//	double median = 0.0;
//	for (double temp; cin >> temp;) {
//		vec.push_back(temp);
//	}
//	bubblesort(vec);
//	std::cout << "\nthe size of the vector is: " 
//		<< vec.size() << "\n";
//	for (double x : vec) {
//		std::cout << x << "\n";
//	}
//	int n = vec.size();
//	if (n % 2 == 0) {
//		median = (vec[n / 2] + vec[(n / 2) - 1]) / 2;
//	}
//	else
//	{
//		median = vec[ ( n - 1 ) / 2];
//	}
//	std::cout << "\nthe median of the vector is: "
//		<< median << "\n";
//}

//int main() {
//	vector <double> vec;
//	double median = 0.0;
//	double sum = 0.0;
//	cout << "enter a sequence of distances between neighbouring cities: \n";
//	for (double temp; cin >> temp;) {
//		vec.push_back(temp);
//	}
//	std::cout << "\nthe size of the vector is: "
//		<< vec.size() << "\n";
//	for (double x : vec) {
//		sum += x;
//		
//	}
//	std::cout << "the sum is " << sum << "\n";
//	bubblesort(vec);
//	cout << "\nThe smallest distance is: " << vec[0] << "\n"
//		<< "\nThe largest distance is: " << vec[vec.size()-1] << "\n"
//		<< "\nThe mean distance is: " << sum / vec.size()<<"\n";
//
//}

// Numbers guessing game

//int main() {
//	int lowerbound = 1;
//	int upperbound = 100;
//	int guess = 0;
//	string answer;
//	for (int attempts = 7; attempts > 0; attempts--) {
//		guess = (lowerbound + upperbound) / 2;
//		cout << "\nIs the following number " << guess << " your guess? (Y/N)\n";
//		cin >> answer;
//		if (answer == "Y") {
//			cout << "\nThe correct guess is " << guess << "\n";
//			break;
//		}
//		else if (answer == "N") {
//			cout << "\nIs your guess greater than " << guess << " ?\n";
//			cin >> answer;
//			if (answer == "Y") {
//				lowerbound = guess + 1;
//			}
//			else if (answer == "N") {
//				upperbound = guess - 1;
//			}
//			else {
//				cout << "\nPlease respond with (Y/N)!\n";
//				continue;
//			}
//		}
//		else {
//			cout << "\nPlease respond with (Y/N)!\n";
//			continue;
//		}
//	}
//}

// simple calculator

//int main() {
//	double operand1 = 0.0;
//	double operand2 = 0.0;
//	string opp = "+";
//	double result = 0.0;
//	cout << "Please enter 2 numbers and the operator used for the operation.\n the operator should be between '+'; '-'; '/'; and '*'.\n\n";
//	cin >> operand1 >> operand2 >> opp;
//	if (opp == "'+'")
//	{
//		result = operand1 + operand2;
//		cout << "The sum of " << operand1 << " and " << operand2 << " is " << result << ".\n";
//	}
//	else if (opp == "'-'")
//	{
//		result = operand1 - operand2;
//		cout << "The difference between " << operand1 << " and " << operand2 << " is " << result << ".\n";
//	}
//	else if (opp == "'/'")
//	{
//		result = operand1 / operand2;
//		cout << "The ratio of " << operand1 << " over " << operand2 << " is " << result << ".\n";
//	}
//	else if (opp == "'*'")
//	{
//		result = operand1 * operand2;
//		cout << "The multiplication of " << operand1 << " and " << operand2 << " is " << result << ".\n";
//	}
//	else
//		cout << "\nYou did not follow the instructions!\n";
//		
//	
//	keep_windy();
//}

// string to numerics

//int main() {
//	vector <string> string_vec = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//	int input = 0;
//	string exiter;
//	while (true)
//	{
//		cout << "\nPlease enter any single digit:\n";
//		cin >> input>>exiter;
//		cout << "\nthe spelled-out digit is " << string_vec[input] << ".\n";
//		if (exiter == "q") {
//			return 0;
//		}
//	}
//	
//	keep_windy();
//}
//int main() {
//	int operand1 = 0;
//	string input1;
//	vector <string> string_vec = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//	cin >> input1;
//	for (string x : string_vec) {
//		if (input1 == x) {
//			auto k = find(string_vec.begin(), string_vec.end(), x);
//			operand1 = k - string_vec.begin();
//		}
//	}
//	cout << "\nthe numeric expression is: " << operand1;
//}

// mini calculator modified

int main() {
	int operand1 = 0;
	int operand2 = 0;
	vector <string> string_vec = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string input1 = "";
	string input2 = "";
	string opp = "+";
	double result = 0.0;
	cout << "Please enter 2 numbers and the operator used for the operation.\n the operator should be between '+'; '-'; '/'; and '*'.\n\n";
	cin >> input1 >> input2 >> opp;
	
	if (find(string_vec.begin(), string_vec.end(), input1) != string_vec.end()) {
		auto k = find(string_vec.begin(), string_vec.end(), input1);
		operand1 = k - string_vec.begin();
		std::cout << "\n" << operand1 << "\n";
	}
	else
	{
		stringstream temp;
		temp << input1;
		temp >> operand1;
	}

	if (find(string_vec.begin(), string_vec.end(), input2) != string_vec.end()) {
		auto t = find(string_vec.begin(), string_vec.end(), input2);
		operand2 = t - string_vec.begin();
		std::cout << "\n" << operand2 << "\n";
	}
	else
	{
		stringstream temp;
		temp << input2;
		temp >> operand2;
	}
	
	cout << "\noperands: " << operand1 << "\t" << operand2 << "\n";
	
	if (opp == "'+'")
	{
		result = operand1 + operand2;
		cout << "The sum of " << operand1 << " and " << operand2 << " is " << result << ".\n";
	}
	else if (opp == "'-'")
	{
		result = operand1 - operand2;
		cout << "The difference between " << operand1 << " and " << operand2 << " is " << result << ".\n";
	}
	else if (opp == "'/'")
	{
		double opdenom = operand2;
		result = operand1 / opdenom;
		cout << fixed;
		cout << "The ratio of " << operand1 << " over " << operand2 << " is " << result << ".\n";
	}
	else if (opp == "'*'")
	{
		result = operand1 * operand2;
		cout << "The multiplication of " << operand1 << " and " << operand2 << " is " << result << ".\n";
	}
	else
		cout << "\nYou did not follow the instructions!\n";
		
	
	keep_windy();
}


// chapter 5. Errors

// // Intro

// compile-time errors: errors found by the compiler. syntax errors and type errors
// Link-time errors: errors found by the linker when trying to combine object files into an executable program
// Run-time errors: errors found by checks in a running program. errors detected by computers, libraries or user code 
// Logic errors: errors found by the programmer looking for the causes of erroneous results.



//int fibonacci(int k) {
//
//	if (k == 0) {
//		return 0;
//	}
//	else if (k == 1) {
//		return 1;
//	}
//	else {
//		return fibonacci(k-1) + fibonacci(k - 2);
//	}
//}
//
//int main() {
//	int number = 0;
//	cout << "enter how many fibo u want: \n";
//	cin >> number;
//	cout << "\n" << fibonacci(number);
//} fibonacci


// // Sources of errors

//int main() {
//
//	cout << sqrt(-1.2);
//}

// poor specification
// incomplete programs
// unexpected arguments
// unexpected input
// unexpected state (data)
// logical errors