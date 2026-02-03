/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;
int main()
{
    int num1{}; // first number 
    int num2{}; // second number
    int sum; // integer. for sum
    int difference; // intger for difference
    int product; // intger for product
    int quotient; // intger for quotient
        cout << "Input your first number \n"; // output to type first number
        cin >> num1; // user input first number
        cout << "Input your second number \n"; // output to type second number
        cin >> num2; // user input first number
    sum = num1 + num2; // to add the numbers
    difference = num1 - num2; // to subtract the numbers
    product = num1 * num2; // to mulitply the numbers
    quotient = num1 / num2; // to divide the numbers
        
    cout << "Sum is " << sum; // output the sum
    cout << "\nDifference is " << difference; // output the difference
    cout << "\nQuotient is " << quotient; // output the quotient
    cout << "\nproduct is " << product; // out the product
    
    
        
    
    return 0;
    
    
}