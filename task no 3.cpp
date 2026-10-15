#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int birthYear;
    float gpa;
    string department;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    birthYear = 2026 - age;[cite: 9]

    cout << "Enter GPA: ";
    cin >> gpa;

    cout << "Enter department: ";
    cin >> department;

    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Birth Year: " << birthYear << endl;[cite: 9]
    cout << "GPA: " << gpa << endl;
    cout << "Department: " << department << endl;

    return 0;
}
