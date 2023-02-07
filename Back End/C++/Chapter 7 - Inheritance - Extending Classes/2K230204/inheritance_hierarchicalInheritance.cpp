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
#include<string.h>

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
        char *stud_name;
    public:
        void get_data(int, char *name);
        void display(void);
};      

void students::get_data(int rolnum, char *name)
{
    roll_number = rolnum;

    int length = strlen(name);
    stud_name = new char[length+1];

    strcpy(stud_name, name);
}

void students::display(void)
{
    std::cout << "\nRoll No: " << roll_number << "    |   Name: " << stud_name;
}

//------------------------------------------------------------------------

class arts : public students
{
    private:
        float arts_sb1;
    public:
        void get_marks(float);
        void put_marks(void);
};

void arts::get_marks(float sb1)
{
    arts_sb1 = sb1;
}

void arts::put_marks(void)
{
    std::cout << "\nArts subject 1 marks: " << arts_sb1 << "\n";
}

//------------------------------------------------------------------------

class medical : public students
{
    private:
        float med_marks;
    public:
        void get_marks(float);
        void put_marks(void);
};

void medical::get_marks(float marks)
{
    med_marks = marks;
}

void medical::put_marks(void)
{
    std::cout << "\nMedical subject1 marks: " << med_marks << "\n";
}

//------------------------------------------------------------------------

class engineering : public students
{
    private:
        float math_marks;
    public:
        void get_marks(float);
        void put_marks(void);
};

void engineering::get_marks(float marks)
{
    math_marks = marks;
}

void engineering::put_marks(void)
{
    std::cout << "\nMaths Marks: " << math_marks << "\n";
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
    std::cout << "\nMech Subject 1 Marks: " << mech_sb1 << "\n"
              << "Mech Subject 2 Marks: " << mech_sb2 << "\n"
              << "Mech Subject 3 Marks: " << mech_sb3 << "\n";
}

//------------------------------------------------------------------------

class electronics : public engineering
{
    private:    
        float etx_marks;
    public:
        void get_marks(float);
        void put_marks(void);
};

void electronics :: get_marks(float marks)
{
    etx_marks = marks;
}

void electronics :: put_marks(void)
{
    std::cout << "\nElectronics Subject1 marks: " << etx_marks << "\n";
}

//------------------------------------------------------------------------

class civil : public engineering
{
    private:    
        float civil_marks;
    public:
        void get_marks(float);
        void put_marks(void);
};

void civil :: get_marks(float marks)
{
    civil_marks = marks;
}

void civil :: put_marks(void)
{
    std::cout << "\nElectronics Subject1 marks: " << civil_marks << "\n";
}

//------------------------------------------------------------------------

int main()
{   
    arts as1;
    medical mds1;
    mechnical mechs1;
    electronics etxs1;
    civil cs1;

    as1.get_data(1, "abc");
    as1.get_marks(99.0);
    as1.display();
    as1.put_marks();

    mds1.get_data(1, "abc");
    mds1.get_marks(99.0);
    mds1.display();
    mds1.put_marks();

    mechs1.get_data(1, "abc");
    mechs1.get_marks(99.0, 98.45, 86.66);
    mechs1.display();
    mechs1.put_marks();

    etxs1.get_data(1, "abc");
    etxs1.get_marks(99.0);
    etxs1.display();
    etxs1.put_marks();
}