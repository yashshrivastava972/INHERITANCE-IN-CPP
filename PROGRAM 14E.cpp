// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: HYBRID INHERITANCE (EXPERIMENT: 14E)

// CODE: 

#include <iostream>
using namespace std;

class Base {
public:     int pubVar = 1;
protected:  int protVar = 2;
private:    int privVar = 3;

public:
    void show() {
        cout << "Inside Base: " 
             << pubVar << " " << protVar << " " << privVar << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "In Derived: " 
             << pubVar << " " << protVar << endl; 
        // privVar not accessible
    }
};

int main() {
    Base b;
    Derived d;

    b.show();        //  all (inside Base)
    d.showDerived(); //  pubVar + protVar
    cout << b.pubVar; // 
    // cout << b.protVar; // X
    // cout << b.privVar; // X
}

// OUTPUT:

// Inside Base: 1 2 3
// In Derived: 1 2
// 1
