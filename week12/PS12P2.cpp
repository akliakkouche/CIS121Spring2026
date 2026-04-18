#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
void readlist(string city[], double population[]){
    ifstream infile;
    infile.open("city.txt");
    for(int i = 0 ; i < 8 ; i++){
        infile >> city[i] >> population[i];
    }
    infile.close();
}
void displist(string city[], double population[]){
        cout << fixed << setprecision(0);
    for(int i = 0 ; i < 8 ; i++){
        cout << city[i] << "  "<< population[i] << endl;
            
    }
}
int main(){
    string city[8],scity;
    bool flag = false;
    double population[8];
    readlist(city,population);
    displist(city,population);
    cout << fixed << setprecision(0);
    cout << "Enter a city that you want to display: ";
    while(cin >> scity){
        flag = false;
    for (int i = 0 ; i < 8 && flag == false; i++){
        if (scity == city[i]){
            cout << city[i] << "has a population of "<<population[i];
            flag = true;
        }
    }
    if (flag == false){
        cout << scity << " not found !!!!";
    }
    cout << endl;
    cout << "Enter city name , ctl + z to stop :"<< endl;
    
 }
    return 0;
}