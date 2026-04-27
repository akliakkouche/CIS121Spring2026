#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    char districtCode;
    int enrolledCredits;
    double tuitionBalance;
};

double computeTuition(char districtCode, int enrolledCredits)
{
    double chargePerCredit;

    if (districtCode == 'I' || districtCode == 'i')
    {
        chargePerCredit = 250.00;
    }
    else
    {
        chargePerCredit = 500.00;
    }

    return enrolledCredits * chargePerCredit;
}

void displayStudents(const vector<Student>& students)
{
    cout << fixed << setprecision(2);
    cout << "\nStudent Tuition List\n";
    cout << "--------------------\n";

    for (const Student& student : students)
    {
        cout << "Name: " << student.firstName << " " << student.lastName << endl;
        cout << "District Code: " << student.districtCode << endl;
        cout << "Credits: " << student.enrolledCredits << endl;
        cout << "Tuition Balance: $" << student.tuitionBalance << endl;
        cout << "--------------------\n";
    }

    cout << "Number of students: " << students.size() << endl;
}

int main()
{
    vector<Student> students;
    Student student;

    cout << "Enter student data. Press Ctrl+Z then Enter on Windows, or Ctrl+D on Mac/Linux, to stop.\n";

    cout << "\nEnter first name: ";
    while (cin >> student.firstName)
    {
        cout << "Enter last name: ";
        cin >> student.lastName;

        cout << "Enter district code (I for in-district, O for out-of-district): ";
        cin >> student.districtCode;

        cout << "Enter enrolled credit hours: ";
        cin >> student.enrolledCredits;

        student.tuitionBalance = computeTuition(student.districtCode, student.enrolledCredits);

        students.push_back(student);

        cout << "\nEnter first name: ";
    }

    displayStudents(students);

    return 0;
}
