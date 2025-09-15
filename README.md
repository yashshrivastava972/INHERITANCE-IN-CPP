# Aim: To Study & Implement Inheritance.

# Tool: VS CODE.

# Theory:
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object-Oriented Programming.

Inheritance is a feature or a process in which, new classes are created from the existing classes. The new class created is called “derived class” or “child class” and the existing class is known as the “base class” or “parent class”. The derived class now is said to be inherited from the base class.


<img width="746" height="324" alt="image" src="https://github.com/user-attachments/assets/2d930f4c-138f-40f2-8804-713e117cb63f" />


<img width="790" height="240" alt="image" src="https://github.com/user-attachments/assets/6e7c1441-2e47-4fc6-938a-7d476b5006eb" />

#####	MODES OF INHERITANCE:

•	Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.

•	Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.

•	Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.

<img width="926" height="366" alt="image" src="https://github.com/user-attachments/assets/146c5c2c-0bd2-4256-b53d-cbe03c3ce09a" />

#####	TYPES OF INHERITANCE: 

•	Single Inheritance: In single inheritance, a class is allowed to inherit from only one class. i.e. one subclass is inherited by one base class only.

•	Multiple Inheritance: In Multiple Inheritance a class can inherit from more than one class. (i.e.) one subclass is inherited from more than one base class.

•	Multilevel Inheritance: In this type of inheritance, a derived class is created from another derived class.

•	Hierarchical Inheritance: In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

• Hybrid Inheritance: It is when two or more types of inheritance are combined (like multiple + hierarchical + multilevel).

# Algorithms:

## Algorithm for Puppy Inheritance Program

Start

Define a base class Animal

Data member: type = "Dog"

Member function: sound() → prints "Barks!"

Define a derived class Puppy inheriting Animal using public inheritance

Data member: name = "Tommy"

In the main function:

Create an object myPuppy of class Puppy.

Call myPuppy.sound() → prints "Barks!".

Access myPuppy.type (from Animal) and myPuppy.name (from Puppy).

Print them together → "Dog Tommy".

End

## Algorithm: Multilevel Inheritance (Animal → Mammal → Dog)

Start

Define class Animal

Function eat() → prints "This animal eats food.".

Define class Mammal inheriting Animal (publicly)

Function breathe() → prints "This mammal breathes air.".

Define class Dog inheriting Mammal (publicly)

Function bark() → prints "The dog barks: Woof Woof!".

In the main function:

Create object d of class Dog.

Call d.eat() → executes Animal class function.

Call d.breathe() → executes Mammal class function.

Call d.bark() → executes Dog class function.

End

## Algorithm: Multiple Inheritance (Person + Student → Engineer)

Start

Define class Person

Function displayPerson() → prints "I am a person.".

Define class Student

Function displayStudent() → prints "I am a student.".

Define class Engineer inheriting from both Person and Student (multiple inheritance)

Function displayEngineer() → prints "I am an engineering student.".

In the main function:

Create object E of class Engineer.

Call E.displayPerson() → executes Person class function.

Call E.displayStudent() → executes Student class function.

Call E.displayEngineer() → executes Engineer class function.

End

## Algorithm: Hierarchical Inheritance (Animal → Dog, Cat, Cow)

Start

Define base class Animal

Function eat() → prints "This animal eats food.".

Define derived class Dog (inherits Animal)

Function bark() → prints "The dog barks: Woof Woof!".

Define derived class Cat (inherits Animal)

Function meow() → prints "The cat meows: Meow Meow!".

Define derived class Cow (inherits Animal)

Function moo() → prints "The cow moos: Moo Moo!".

In the main function:

Create object d of Dog.

Call d.eat() and d.bark().

Create object c of Cat.

Call c.eat() and c.meow().

Create object cw of Cow.

Call cw.eat() and cw.moo().

End

## Hybrid Inheritance Algorithm

Start

Define class Base

pubVar = 1 (public) → accessible everywhere.

protVar = 2 (protected) → accessible only inside Base and derived classes.

privVar = 3 (private) → accessible only inside Base.

Member function show() prints all three.

Define class Derived inheriting Base.

Member function showDerived() prints pubVar and protVar.

Cannot access privVar.

In main():

Create object b of Base.

Call b.show() → prints all three values.

Create object d of Derived.

Call d.showDerived() → prints pubVar and protVar.

Directly access b.pubVar → allowed.

Try to access b.protVar or b.privVar → not allowed (error).

End

# Conclusion:
By studying and implementing inheritance in C++, we understand how code reusability, extensibility, and organization are achieved. Inheritance allows a derived class to access and extend the properties and behaviors of a base class.

Single, Multilevel, Multiple, Hierarchical, and Hybrid inheritance demonstrate different real-world relationships.

Access specifiers (public, protected, private) control visibility of members across classes.

Inheritance reduces redundancy, improves maintainability, and supports object-oriented design principles like polymorphism and encapsulation.

Thus, inheritance is a powerful feature of OOP that helps build structured and reusable code.
