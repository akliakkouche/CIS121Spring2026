#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
void read_list(string fname[],string lname[],float gpa[]){
    ifstream infile;
    infile.open("student.txt");
    for(int i=0; i < 10 ; i++){
        infile >> fname[i] >> lname[i] >> gpa[i];
    }
    infile.close();
}
void display_list(string fname[],string lname[],float gpa[]){
    for(int i=0 ; i < 10 ;i++){
        cout << fname[i] <<" "<< lname[i] <<" "<< gpa[i] << endl;
    }
}
void disreverse_list(string fname[],string lname[],float gpa[]){
    for(int i=9 ; i > -1 ;i--){
        cout << fname[i] <<" "<< lname[i] <<" "<< gpa[i] << endl;
    }
}
int main(){
    string fname[10],lname[10];
    float gpa[10];
    read_list(fname,lname,gpa);
    display_list(fname,lname,gpa);
    cout << endl << endl;
    disreverse_list(fname,lname,gpa);
    return 0;
}