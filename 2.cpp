#include <iostream>
using namespace std;


int main (){
    int total =0, counter = 0, grade;
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
    while (grade != -1){
        total += grade;
        counter++;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }
        if (counter != 0){
            double average = static_cast<double>(total) / counter;
            cout << "Class Average is: " << average;
        }
        else {
            cout << "No grades were entered.";
        }
}
// // /*
// // Reflection:
// // 1. What I understood from this program:
// //  (Explain the concept in your own words.)
// This program is taking what ever amount if values i input and then divedes it by the total number of inputs to get nme the average
// // 2. Difficulties I faced:
// //  (Syntax, logic errors, infinite loops, casting issues, etc.)
// Syntax errors and habing issues with getting the counter to work
// // 3. What I needed to search or review:
// //  (Documentation, examples, lecture slides, etc.)
// How to use counter and when to use counter++ and and the accumalto.
// // 4. AI Usage (if any):
// //  - Did you use AI tools? If yes, explain how.
// //  - Did you verify the output?
// I did not use AI for this it was a lot of trial and error
// // 5. What I learned:
// //  (Be specific about loops, counters, casting, etc.)
// I learnt how to make a counter that is based on how many inputs i put in