#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
void loadinglist(string fname[],string lname[],float salary[]){
    ifstream infile;
    infile.open("salary.txt");
    for(int i = 0 ; i < 10 ; i++){
        infile >> fname[i] >> lname[i] >> salary[i];
    }
    infile.close();
}
void diplaylist(string fname[], string lname[], float salary[]){
    cout << setprecision(0)<< fixed;
    for(int i = 0 ; i < 10 ; i++){
        cout << fname[i] <<" "<<lname[i] <<" "<<salary[i]<< endl;
    }
}
void searching(string fname[],string lname[],float salary[],string targetlname){
    bool isthere = false;
    for(int i = 0 ; i < 10 && isthere == false; i++){
        if (lname[i] == targetlname){
            cout << fname[i] <<" "<< lname[i] << " "<< salary[i] << endl;
            isthere = true;
        }
    }
    if (isthere == false){
        cout << targetlname << " not found try again !";
    }
}
int main(){
    string targetlname;
    string fname[10];
    string lname[10];
    float salary[10];
    loadinglist(fname,lname,salary);
    diplaylist(fname,lname,salary);
    cout << endl;
    cout << "Enter the last name you want to look for : ";
    while(cin >> targetlname){
    searching(fname,lname,salary,targetlname);
    cout << "Enter the last name you want to look for : "<< endl;
}
}