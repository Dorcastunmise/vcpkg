#include <iostream>
using namespace std;

int main() {
  
cout << 7 + 3 << endl;
cout << 7 + 3.14;
cout << 7.0 + 3.00; 
cout << 7.00 + 3.01400; 

  int a = 1;
double b = 1.0;
cout << a << endl;
cout << b << endl;
/*
%d: This format specifier is used for formatting integers (decimal integers). 
When used with printf, it indicates that an integer value should be inserted in that position in the string. 
When used with scanf, it indicates that an integer value should be read and assigned to the specified variable.
*/
printf("%d \n", a);
printf("%f \n", b);
/* %f: This format specifier is used for formatting floating-point numbers (decimal numbers).
 When used with printf, it indicates that a floating-point value should be inserted in that position in the string. 
 When used with scanf, it indicates that a floating-point value should be read and assigned to the specified variable.*/
int num = 10;
printf("The value of num is %d\n", num);

float number;
scanf("%f", &number);

int a = 10;
double b = 5.0;
printf("%d \n", a / b);

/*
Normally, you use double in C++ division since the result usually involves decimals. 
If you use integers, the division operator returns an int. 
This “integer division” does not round up, nor round down. 
It removes the decimal value from the answer.
*/
int a = 5;
int b = 2;
cout << a / b << endl;
/*
Division by zero is undefined in mathematics. 
In C++, dividing by an integer of 0 results in an error message.
However, dividing by a double of 0.0 results in inf which is short for infinity.
*/
double sector = 25.0;
double lesson = 0.0;
sector/=lesson;
printf("%f", sector);
/*
Remember that for the scanf function, you need to provide the address of the variable where the input should be stored using the & operator.
Keep in mind that there are other format specifiers as well for different data types and formatting options,
such as %s for strings, %c for characters, %lf for double precision floating-point numbers, and so on.
*/
bool setting = true;
bool peace = true;
bool trial = false;
cout << boolalpha << (setting && peace && trial) << endl;
cout << boolalpha << (! ! true) << endl;
  return 0;
  
}
/*
IMPORTANT
You may have noticed that when you add an int of 3 to a double of 7.1 you get 10.1. 
However, when you add an int of 3 to a double of 7.0, you get 10 instead of 10.0. 
This occurs because by default cout does not print zeros after a decimal point unless 
those zeros are enclosed by other non-zero digits.
Examples:
cout << 7 + 3.14; prints 10.14
cout << 7.0 + 3.00; prints 10
cout << 7.00 + 3.01400; prints 10.014
Note that when an int and a double are added together, 
the result will be a double because the program will take on the data type 
that is more flexible.

---------------------------------------------
What is printed with cout when you add an int of 3 and a double of 7.0100 together?
An error message
An int of 10
A double of 10.01
A double of 10.0100
Ans:
Since cout excludes all zeros after a decimal point unless they are 
enclosed by non-zero digits, the last two zeros will not be printed and
the result will show 10.01.
-------------------------------------------------
printf()
printf() originates from the C language and, unlike the cout command, it is considered to be specific. This means that you must specify what type of data you want to print before you can use the command successfully.
int a = 1;
double b = 1.0;
cout << a << endl;
cout << b << endl;
printf("%d \n", a);
printf("%f \n", b);
*/

