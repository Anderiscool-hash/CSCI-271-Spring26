#include <iostream>
using namespace std;
int main (){
    int age;
    cout << "Enter your age (1-120): ";
    cin >> age;
while (age <1 || age >120){
    cout << "Invalid age. Please enter a realistic age (1-120): ";
    cin >> age;
}
}
// // Reflection:
// // 1. What I understood from this program:
// //  (Explain the concept in your own words.)
// This program is asking the user to input their age and if the age is less than 1 or greater than 120 it will ask the user to input a valid age until they do
// // 2. Difficulties I faced:
// //  (Syntax, logic errors, infinite loops, casting issues, etc.)
// No issues with this program it was pretty straight forward
// // 3. What I needed to search or review:
// //  (Documentation, examples, lecture slides, etc.)
// Nothing it was pretty straight forward
// // 4. AI Usage (if any):
// //  - Did you use AI tools? If yes, explain how.
// //  - Did you verify the output?
// No AI was used
// // 5. What I learned:
// //  (Be specific about loops, counters, casting, etc.)
// I learnt how to use a while loop to validate user input and how to make it repeat until the user inputs a valid age