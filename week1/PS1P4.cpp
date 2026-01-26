#include <iostream>
using namespace std;

int main() {
  // input 
  int n1, n2 ,n3 , result;
  cout << "Enter three numbers to sum: ";
  cin >> n1;
  cin >> n2;
  cin >> n3;

  // process
 
  result = (n1 + n2) * n3;
  // output 
  cout << "the result is :" << result << endl;
  return 0;
}
