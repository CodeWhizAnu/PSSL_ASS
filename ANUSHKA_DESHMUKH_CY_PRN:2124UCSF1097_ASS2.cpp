#include <iostream>
using namespace std;

// Base class Animal
class Animal {
public:
    void eat() {
        cout << "I eat food" << endl;
    }
};

// Derived class Mammal (inherits from Animal)
class Mammal : public Animal {
public:
    void walk() {
        cout << "I walk on four legs" << endl;
    }
};

// Derived class Dog (inherits from Mammal)
class Dog : public Mammal {
public:
    void bark() {
        cout << "I bark loudly" << endl;
    }
};

int main() {
    // Create an object of class Dog
    Dog myDog;

    // Calling methods of Dog, Mammal, and Animal through Dog object
    myDog.bark();
    myDog.walk();
    myDog.eat();

    return 0;
}


