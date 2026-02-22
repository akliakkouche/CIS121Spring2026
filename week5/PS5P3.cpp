#include <iostream>
#include <string>

using namespace std;

int main(){

    //input 
    string lname;
    double hrsworked, payrate,total;
    char jobcode;
    cout << "enter your last name :";
    cin >> lname;

    cout << endl << "enter hours worked :";
    cin >> hrsworked;
    cout <<endl << "enter job code :";
    cin >> jobcode;

    //process
    if(jobcode == 'E'){
        payrate = 25;
    }
    else if (jobcode == 'J'){
        payrate = 20;
    }
    else if (jobcode == 'A'){
        payrate = 15;
    }
    else cout << "enter a correct job code!!";

    total = hrsworked * payrate;

    //output 
    cout << " that lastname is : "<< lname << "hours worked :" << hrsworked << "your pay rate is :" << payrate << "and your total is :"<< total;




    return 0;
}