#include <iostream>
#include <string>
using namespace std;

int main(){

    // input 
    string lname;
    char grade;
    int score;
    cout << "enter your last name :"<< endl;
    cin >> lname;
    cout << "enter your score :" << endl;
    cin >> score;

    //process 
    if(score >= 100 ){
        grade = 'A';
    }
    else if (score < 60){
        grade = 'F';
    }
    else if (score >=60 && score < 70){
        grade = 'D';
    }
    else if (score >= 70 && score <80){
        grade = 'C';
    }
    else if (score >= 80 && score <90){
        grade = 'B';
    }
    else cout << "please enter a correct socre !!!";

    //output 
    cout << "Your last name is :"<< endl ;
    cout << lname <<endl;
    cout << "and your grade is :" << endl;
    cout << grade;
    return 0;
}