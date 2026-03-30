/*
Name: Your Full Name
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: (Example: Counter-Controlled Class Average)
Description: Brief explanation of what this program does.
*/
#include <iostream>
using namespace std;

int main() {
    int total = 0; // initialize total
    int counter = 1;
    while (counter <= 10) { // loop 10 times
        int grade; // declare grade
        cin >> grade; // input grade
        total += grade; // add grade to total
        counter++; // increment counter
    }
    double average =
    static_cast<double>(total) / 10; // calculate average
    cout << average; 
}

// /*
// Reflection:
// 1. What I understood from this program:
//  (Explain the concept in your own words.)
// The first total is equal to 0 then we set the counter to start at 1 and we loop 10 times to get the 10 grades then we find the average by dividing the total by 10
// 2. Difficulties I faced:
//  (Syntax, logic errors, infinite loops, casting issues, etc.)
//  I kept getting Syntax errors and infinite loops 
// 3. What I needed to search or review:
//  (Documentation, examples, lecture slides, etc.)
//  counter++ and how to use it in a while loop. aswell as double average and how to get the total to get the average
// 4. AI Usage (if any):
//  - Did you use AI tools? If yes, explain how.
//  - Did you verify the output?
//  I used AI tools to help me understand how to use the counter because i didnt know how why i kept getting syntax errors and the infinte loops
// 5. What I learned:
//  (Be specific about loops, counters, casting, etc.)
//  How the counter works in the code and where i can use it.
//  /*