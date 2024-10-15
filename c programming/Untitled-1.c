
#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include <limits.h>

int main () {
    /*This is multiline comment */
//use primtf to print info printf();

//  to imput data into your progrsm use scanf();

//  1. valiables and Data types
// introduction

//  c is powerful, efficient , and flexible programming language developied by  dennis at bell labs 

/* 
System programming 
Embeddied systems
Application development 
Operation system development 
*/

/*
efficieny and performance
Portability across  diffirent platforms
Low-level memory  manipulation capabilities 
Extensive strandard library
*/

// this tutorial will cover the fundmental concepts of variables and data types in c , provviding a solid foundation for your C programming journey.

// 1.2 Character sets 

// C programming are written using the ASCII (American Standard Code for Information  Interchange) charater set. Understanding the character set is crucial for writng a code and working with character data.

/*
//The ASCII character set includes:
//1.Lowercase letter(a-z)
//2.Uppercase letters(A-z)
//3.Digits(0-9)+
Special character;
function: .,:;?!'"(){}[]<>
Mathematical symbols : +=-/%^&

*/

//  C is case - sensitive , meaning that uppercase and  lowercase  letters are treated as distrainct  characters  different  and variables  named  "count" would be considered diifirent variables.

// 1.3 Keywords 
//  keywords are  reserved words in C that have special menings and cannot  be  used as  identifiers ( such as variables  names or function names). They are the building blocks of C sytnax and are used  o define the structure and the behavior  of your programs.

/*
Here  acomplete list of keywords in C
 1. Data  type:
 int 
 float 
 double 
 char 
 void 
  _Bool (C99)


 */

//  Varliables  are  named  storage location in memory that hold data. They are fundamental to programming. allowing you to store retrive , and manuplilate data throughout your program.

// Key points about variables in C:
// Declaration: You  must declare a variable before using it. the declaration specfies the variable's anme and data type.
//  Naming conventions:
// Can contain letters, digits, and underscores 
// Must start  with a letter  or underscore 
// Cannot use keywords as variable names 
// Case senstive ( age, Age and AGE are different variables)

// Initialization: You can optionally intialize a variable when you declared.
// Scope: V ariables have  different scopes (local,global) depening on where they are declared. 

// Examples of variable declarations and initializations:

// Declaration without initilazation 
int count;
// Declaration with intiliazation 
int max_value = 100;
// Floating -point variable 
float pi = 3.14;
// Character
char grade = 'A';
// Mutliple declaration in one line 
int x, y, z;

// 1.5 Data types:

// C provides  several built-in  data types to represent different kinds of data. understaing  these types is crucial for efficient memory usage and accurate calculations.

// 1. integer types:

// a. int ; The most commonly used integer type. Typically 4 bytes (32 bits )on modern systems.
// Range: -2,147,483,648 to 2,147,483,647 (for 32-bit int)

// b. Short: Used for smaller interger values. Typically 4 or 8 bytes.
// Range : -32,768 to 32,767

// c. long: Used for larger interger values. typically 4 or 8 bytes.
//  Range at least -2,147483,648 to 2 ,147 ,647

//  Example 

int i = 21 
// suffix for unsigned  
unsigned int ui = 30000000U;
// suffix for long 
long myLong = 1234567890l;
// suffix for float 
float myFloat = 3.1456f;
// double 
double myDouble = 2.7182819;
// boolean 
bool myBool = true 

// output there variables 
printf("My interger: %d\n",myInt);
printf("Unsigned Integer: %u\n", ui);
printf("My Long: %ld\n",myLong);
printf("My Float: %f\n",myFloat);
printf("My Double: %f\n",myDouble);
printf("My Character: %c\n",myChar);
printf("My Boolean: %d\n", myBool);
    return 0;
}