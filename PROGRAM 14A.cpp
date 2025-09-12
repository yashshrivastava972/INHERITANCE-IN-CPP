// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SINGLE INHERITANCE (EXPERIMENT: 14A)

// CODE: 

#include <iostream>
using namespace std;

class Animal {
    public:
    string type = "Dog";
    void sound() {
        cout << "Barks!\n";
    }
};

class Puppy : public Animal {
    public:
    string name = "Tommy";
};

int main() {
    Puppy myPuppy;
    myPuppy.sound();
    cout << myPuppy.type + " " + myPuppy.name;
    return 0;
}

// OUTPUT:

// Barks!
// Dog Tommy
