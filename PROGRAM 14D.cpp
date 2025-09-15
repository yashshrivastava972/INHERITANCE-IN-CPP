// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: HIERARCHICAL INHERITANCE (EXPERIMENT: 14D)

// CODE: 

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks: Woof Woof!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows: Meow Meow!" << endl;
    }
};

// Derived class 3
class Cow : public Animal {
public:
    void moo() {
        cout << "The cow moos: Moo Moo!" << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    Cow cw;

    cout << "Dog object:" << endl;
    d.eat();    // From Animal
    d.bark();   // From Dog

    cout << "\nCat object:" << endl;
    c.eat();    // From Animal
    c.meow();   // From Cat

    cout << "\nCow object:" << endl;
    cw.eat();   // From Animal
    cw.moo();   // From Cow

    return 0;
}

// OUTPUT:

// Dog object:
// This animal eats food.
// The dog barks: Woof Woof!

// Cat object:
// This animal eats food.
// The cat meows: Meow Meow!

// Cow object:
// This animal eats food.
// The cow moos: Moo Moo!
