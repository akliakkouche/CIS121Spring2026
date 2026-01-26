#include <iostream>
using namespace std;

int main() {
  // input 
  string fname, lname, dspy;
  cout << "Enter your first name: " << endl;
  cin >> fname;
  cout << "Enter your last name: " << endl;
  cin >> lname;
  // process
  dspy = "Hello " + lname;

  // output 
  cout << dspy;
  return 0;
}
