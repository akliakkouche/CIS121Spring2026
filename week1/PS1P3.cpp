#include <iostream>
using namespace std;

int main() {
  // input 
  string lname , msg;
  double score;
  cout << "Enter last name and score: ";
  cin >> lname;
  cin >> score;
  // process

    msg = lname + " has a score of " + to_string(score);
  // output 
  cout << msg;
  return 0;
}
