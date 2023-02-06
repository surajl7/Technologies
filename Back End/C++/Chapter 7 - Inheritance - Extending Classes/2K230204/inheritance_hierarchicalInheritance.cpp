// Inheritance 

/*
Hirarchical Inheritance :
    We have deiscussed so far the inheritance can be used to mmodify a class
    when it did not satisfy the requirments of a perticular problem on hand.
    Additional members are added through inheritance to extend the capabilities 
    of a class. Another intresting application of inheritance is to use it as a support
    to the hirarchical design of a program. 
    Many programming problems can be cast into a hierarchy where certain features of one
    level are shared by many others below that level.
*/ 

/*
Example:
                        ------------
                        | Students |
                        ------------
                        |     |    |
            -------------     |    ---------------                                         
            |                 |                  |
        --------       ---------------      -----------
        | Arts |       | Engineering |      | Medical |
        --------       ---------------      -----------
                        |     |     |
                  -------     |     --------
                  |           |            |
              --------    ---------     ---------
              | Mech |    | Elec. |     | Civil |
              --------    ---------     ---------

    Fig. Hierachical classification of students
*/

#include<iostream>

class engineering;
class arts;
class medical;
class mechanical;
class electronics;
class civil;


//BASE CLASS---------------------------------------------------------------
class students
{
    private:
        int roll_number;
        char sname[20];
    public:
        void get_data(int, char []);
        void display(void);
};      

void students::get_data(int rolnum, char name[20])
{
    roll_number = rolnum;

    for(int i = 0; name[20] != '\0', i++)
    {
        sname[i] = name[i];
        sname[i] = '\0';
    }
    // sname[20] = *name;
}

void students::display(void)
{
    std::cout << "Roll No: " << roll_number << "\t|\tName: " << sname;
}

//------------------------------------------------------------------------

class engineering : public students
{
    private:
        float math_marks;
    public:
        void get_marks(float);
};

void engineering::get_marks(float marks)
{
    math_marks = marks;
}

//------------------------------------------------------------------------

class mechnical : public engineering
{
    private:
        float mech_sb1;
        float mech_sb2;
        float mech_sb3;
    public:
        void get_marks(float, float, float);
        void put_marks(void);
};

void mechnical::get_marks(float sb1, float sb2, float sb3)
{   
    mech_sb1 = sb1;
    mech_sb2 = sb2;
    mech_sb3 = sb3;
}

void mechnical::put_marks(void)
{
    std::cout << "Mech Subject 1 Marks: " << mech_sb1 << "\n"
              << "Mech Subject 2 Marks: " << mech_sb2 << "\n"
              << "Mech Subject 3 Marks: " << mech_sb3 << "\n";
}

//------------------------------------------------------------------------

int main()
{
    mechnical s1;

    s1.get_data(1, "abc");

    s1.get_marks(99.0, 83.20, 78.90);

    s1.display();
    s1.put_marks();
}