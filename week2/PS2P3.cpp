#include <iostream>
#include <string>
using namespace std;

int main(){
    // input 
    double length , width , area, circumference;
    cout << "enter the length :";
    cin >> length;
    cout << "enter the width :";
    cin >> width;       
    // process 
    area = length * width;   
    circumference = 2 * (length + width);
    //output 
    cout << "The area is :" << area;  
    cout << "\nThe circumference is :" << circumference;  
    return 0;
}
