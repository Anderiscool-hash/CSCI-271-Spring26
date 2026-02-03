/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()

{
    int num1{}; // first number
    int num2{}; // second number
    int num3{}; // third number 
    int sum; // sum 
    int quotient; // quotient 
        cout << "input 3 grades"; // out for to let user know to input 
        cin >> num1 >> num2 >> num3; // input from users for 3 numbers 
    sum = num1 + num2 + num3; // adding of the 3 numbers 
    quotient = sum / 3; // dividing the 3 numbers 
    cout << "average gpa " << quotient << endl; // outputing the average of the numbers
    return 0;
}
