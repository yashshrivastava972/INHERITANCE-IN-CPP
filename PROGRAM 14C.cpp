// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: MULTIPLE INHERITANCE (EXPERIMENT: 14C)

// CODE: 

#include <iostream>
using namespace std;

class Person {
public:
    void displayPerson() {
        cout << "I am a person." << endl;
    }
};

class Student {
public:
    void displayStudent() {
        cout << "I am a student." << endl;
    }
};

// Derived class inherits from both Person and Student
class Engineer : public Person, public Student {
public:
    void displayEngineer() {
        cout << "I am an engineering student." << endl;
    }
};

int main() {
    Engineer E;

    // Access members of both base classes
    E.displayPerson();   // From Person
    E.displayStudent();  // From Student
    E.displayEngineer(); // From Engineer

    return 0;
}

// OUTPUT:

// I am a person.
// I am a student.
// I am an engineering student.
