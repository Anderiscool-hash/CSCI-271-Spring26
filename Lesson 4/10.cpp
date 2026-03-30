#include <iostream>
using namespace std;
int main (){
    for (int i = 1; i <= 10; i++) {
        if (i==3){
            continue;
        }
        if ( i == 6){
            break;
        }
        cout << i << " ";
    }
}
// // Reflection:
// // 1. What I understood from this program:
// //  (Explain the concept in your own words.)
// This program is counting from 1 to 10 and printing the numbers out but when it gets to 3 it will skip it and not print it out and when it gets to 6 it will stop the loop and not print anything after 6
// // 2. Difficulties I faced:
// //  (Syntax, logic errors, infinite loops, casting issues, etc.)
// I kept getting syntax errors because i forgot to put the parentheses around the if statements and i also forgot to put the semicolon at the end of the continue and break statements
// // 3. What I needed to search or review:
// //  (Documentation, examples, lecture slides, etc.)
// I had to review how to use the if statements and how to use the continue and break statements in a for loop
// // 4. AI Usage (if any):
// //  - Did you use AI tools? If yes, explain how.
// //  - Did you verify the output?
// I used AI to help me find out why i kept getting syntax errors and how to use the continue and break statements in a for loop
// // 5. What I learned:
// //  (Be specific about loops, counters, casting, etc.)
// I learnt how to use the continue and break statements in a for loop and how they work with the counter to skip certain numbers and stop the loop at a certain point