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
    int num1{};
    int num2{};
    int num3{};
    int sum;
    int quotient;
        cout << "input 3 grades";
        cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    quotient = sum / 3;
    cout << "average gpa " << quotient << endl;
    return 0;
}