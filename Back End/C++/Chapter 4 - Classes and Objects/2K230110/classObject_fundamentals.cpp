/*Classes and Objects*/

/*
Ex. 
    Class --> Fruits
    Object --> Mango

Syntax: -->

class <classname>
{
    Accessmodifier:
        variables / states / Attribues 
    Accessmodifier:
        functions / behaviours
};

Acessmodifiers:
    1. public
    2. private
    3. protected (consept used in inharitance)
*/

// Ex. create a class for students information

#include<iostream>
using namespace std;

class students      // declaring and defining class
{
    public:                 //accessmodifier for attributes
        int roll_num;       
        char name[20];
    
    public:                 //accessmodifiers for functions / behaviours 
        void get()
        {
            cout << "\nEnter roll num: ";
            cin >> roll_num;
            cout << "Enter name: ";
            cin >> name;
        }
        void put()
        {
            cout << "\nRoll num is: " << roll_num;
            cout << "\nName is: " << name << "\n";
        }
};

int main()
{
    students s;         // creating an object "s"
    s.get();            // calling get function from "students" class for object "s"
    s.put();            // calling put function from "students" class for object "s"

    students s1;        // creating an object "s1"
    s1.get();           // calling get function from "students" class for object "s1"
    s1.put();           // calling put function from "students" class for object "s1"

    cout << "\n";
    return 0;
}