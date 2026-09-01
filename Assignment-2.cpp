#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    string course;

public:
    Student(string n, int r, string c) {
        name = n;
        rollNo = r;
        course = c;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student student1("Samarth", 32, "Computer Science");

    student1.display();

    return 0;
}