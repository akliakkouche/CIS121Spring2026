#include <iostream>
#include <string>
using namespace std;

class Membership {
private:
    string firstName = "Not Entered";
    string lastName = "Not Entered";
    int age = 18;
    string type = "Bronze";

public:
    void setFirstName(string f) { firstName = f; }
    string getFirstName() { return firstName; }

    void setLastName(string l) { lastName = l; }
    string getLastName() { return lastName; }

    void setAge(int a) { age = a; }
    int getAge() { return age; }

    void setType(string t) { type = t; }
    string getType() { return type; }

    double getCost() {
        double cost;

        if (type == "Gold") cost = 1200;
        else if (type == "Silver") cost = 1000;
        else cost = 500;

        if (age > 50)
            cost *= 0.9;

        return cost;
    }
};

int main() {
    Membership m; // instantiation

    string first, last, type;
    int age;

    while (true) {
        cout << "\nEnter first name (Ctrl+Z to stop): ";
        if (!(cin >> first)) break;

        cout << "Enter last name: ";
        cin >> last;

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter type (Gold/Silver/Bronze): ";
        cin >> type;

        m.setFirstName(first);
        m.setLastName(last);
        m.setAge(age);
        m.setType(type);

        cout << "\n--- Membership Info ---\n";
        cout << m.getFirstName() << " " << m.getLastName() << endl;
        cout << "Age: " << m.getAge() << endl;
        cout << "Type: " << m.getType() << endl;
        cout << "Cost: $" << m.getCost() << endl;
    }
}