// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: MULTILEVEL INHERITANCE (EXPERIMENT: 14B)

// CODE: 

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

class Mammal : public Animal {
public:
    void breathe() {
        cout << "This mammal breathes air." << endl;
    }
};

class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog barks: Woof Woof!" << endl;
    }
};

int main() {
    Dog d;

    // Functions from all levels
    d.eat();      // From Animal
    d.breathe();  // From Mammal
    d.bark();     // From Dog

    return 0;
}

// OUTPUT: 

// This animal eats food.
// This mammal breathes air.
// The dog barks: Woof Woof!
