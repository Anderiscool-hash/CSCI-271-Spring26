#include <iostream>
using namespace std;
int main (){
int sum =0;
for (int i =2; i<=20; i+=2){
  sum += i;
}
cout << "Sum is " << sum;
}

// // Reflection:
// // 1. What I understood from this program:
// //  (Explain the concept in your own words.)
// This program is adding all the even numbers from 2 to 20 and then printing the sum of those numbers out
// // 2. Difficulties I faced:
// //  (Syntax, logic errors, infinite loops, casting issues, etc.)
// I kept getting errors where it wouldnt add 
// // 3. What I needed to search or review:
// //  (Documentation, examples, lecture slides, etc.)
// I have to review more examples and when to apply this type of loop and how to make it add the numbers together
// // 4. AI Usage (if any):
// //  - Did you use AI tools? If yes, explain how.
// //  - Did you verify the output?
// No ai was used 
// // 5. What I learned:
// //  (Be specific about loops, counters, casting, etc.)
// I learnt how to use a for loop to add numbers together and how to make it add only even numbers by using i+=2