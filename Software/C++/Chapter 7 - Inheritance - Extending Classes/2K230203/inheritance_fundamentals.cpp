// Inheritance: Extending Classes

/*
Key Concepts:
    -   Resuability
    -   Inheritance
    -   Single Inheritance
    -   Multiple inheritance
    -   Multilavel inheritance
    -   Hybrid inheritance
    -   Hierachical inheritance
    -   Defined a derived class
    -   Inheritance private members
    -   Virtual base class
    -   Direct base class
    -   Indirect base class
    -   Abstract class
    -   Defined derived class constructors
    -   Nesting of classes

    C++ strongly supports the concept of reusability.

    Inheritance:
        The mechanisum of deriving a new class from an old one is called inheritance (or derivation).

    Class types:
        The old class is refered to as base class and the new one is called as derived class or subclass.

    Single inheritance:
        A derived class with only one base class, is called single inheritance 
    
    Multiple inheritance:
        A class with several base classes is multiple inheritance.

    Hierarchical inferitance:
        The traits of one class may be inherited by more than one class. This process is
        known as hierarchical inheritance.

    Multilavel inheritance:
        The mechanisum of deriving a class from another 'derived class' is known as multilevel
        inheritance.


a)  Single Inheritance

    A --> B


b) Multiple Inheritance

    A -->
          C
    B -->


c) Hierarchical Inheritance

      -->   B
    A -->   C
      -->   D


d) Multilavel Inheritance 

    A --> B --> C


e)  Hybrid inheritance

      -->   B
    A           --> D
      -->   C


Defning Derived Classes
    A derived class can be defined by specifying it's reletionship with the base class 
    in addition to it's own details.
    The general form of defining a derived class is:

        class derived-class-name : visibility-mode base-class-name
        {
            ...//
            ...//   members of derived clas
            ...//
        };

    The colon indicates that the derived-class-name is derived from the base-class-name.
    The visibility-mode is optional and, if present, may be either private or public.
    The default visibility mode is private. Visibility mode spesifies whether the features
    of base class are priveted or publicly derived.
*/