#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
  // input 
  int n1, n2, sum, product, diffrence;
  cout << "enter two real numbers: ";
  cin >> n1;
  cin >>n2;


  
  // process
 
  sum = n1 + n2;
  product = n1 * n2;
  diffrence = abs(n1 - n2);
  // output 
  cout << "the sum is: " << sum << endl;
    cout << "the product is: " << product << endl;
      cout << "the diffrence is: " << diffrence << endl;
  return 0;
}
