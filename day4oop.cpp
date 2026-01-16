/*#include<iostream>
using namespace std;

class Teacher
{
    public:
    string name,dept,subject;
    int id;
    float salary;
    void getdata();
    void putdata();
};

void Teacher::getdata()
{
    cout<<"enter id of teacher:"<<"\n";
    cin>>id;
    cout<<"enter name of teacher:"<<"\n";
    cin>>name;
    cout<<"enter department of teacher:"<<"\n";
    cin>>dept;
    cout<<"enter subject that teacher teach to student:"<<"\n";
    cin>>subject;
    cout<<"enter salary of teacher:"<<"\n";
    cin>>salary;
}

void Teacher::putdata()
{
    cout<<"id of teacher is-"<<id<<"\n";
    cout<<"name of teacher is-"<<name<<"\n";
    cout<<"department od teacher is-"<<dept<<"\n";
    cout<<"subject of teacher is-"<<subject<<"\n";
    cout<<"salary of teacher is-"<<salary<<"\n";
}

int main()
{
    Teacher t1;
    cout<<"-------TEACHER DETAILS--------"<<"\n";
    t1.getdata();
    t1.putdata();

    return 0;
}


                             INLINE PROGRAM

#include<iostream>
using namespace std;

class Teacher
{
    public:
    string name,dept,subject;
    int id;
    float salary;

    void getdata()
    {
    cout<<"enter id of teacher:"<<"\n";
    cin>>id;
    cout<<"enter name of teacher:"<<"\n";
    cin>>name;
    cout<<"enter department of teacher:"<<"\n";
    cin>>dept;
    cout<<"enter subject that teacher teach to student:"<<"\n";
    cin>>subject;
    cout<<"enter salary of teacher:"<<"\n";
    cin>>salary;
    }

    void putdata()
    {
    cout<<"id of teacher is-"<<id<<"\n";
    cout<<"name of teacher is-"<<name<<"\n";
    cout<<"department od teacher is-"<<dept<<"\n";
    cout<<"subject of teacher is-"<<subject<<"\n";
    cout<<"salary of teacher is-"<<salary<<"\n";
    }
};

int main()
{
    Teacher t1;
    cout<<"-------TEACHER DETAILS--------"<<"\n";
    t1.getdata();
    t1.putdata();

    return 0;
}


                             ENCAPSULATION

#include<iostream>
using namespace std;

class Teacher
{
    public:
    string name,dept,subject;
    int id;
    float salary;
    void getdata();
    void putdata();
};

void Teacher::getdata()
{
    cout<<"enter id of teacher:"<<"\n";
    cin>>id;
    cout<<"enter name of teacher:"<<"\n";
    cin>>name;
    cout<<"enter department of teacher:"<<"\n";
    cin>>dept;
    cout<<"enter subject that teacher teach to student:"<<"\n";
    cin>>subject;
    cout<<"enter salary of teacher:"<<"\n";
    cin>>salary;
}

void Teacher::putdata()
{
    cout<<"id of teacher is-"<<id<<"\n";
    cout<<"name of teacher is-"<<name<<"\n";
    cout<<"department od teacher is-"<<dept<<"\n";
    cout<<"subject of teacher is-"<<subject<<"\n";
    cout<<"salary of teacher is-"<<salary<<"\n";
}

int main()
{
    Teacher t1;
    cout<<"-------TEACHER DETAILS--------"<<"\n";
    t1.getdata();
    t1.putdata();

    return 0;
}

                        DATA HIDING (ABSTRACTION)


#include<iostream>
using namespace std;

class Teacher
{
    private:
    float salary;
    string address;

    public:
    string name,dept,subject;
    int id;
    void getdata();
    void putdata();
};

void Teacher::getdata()
{
    cout<<"enter id of teacher:"<<"\n";
    cin>>id;
    cout<<"enter name of teacher:"<<"\n";
    cin>>name;
    cout<<"enter department of teacher:"<<"\n";
    cin>>dept;
    cout<<"enter subject that teacher teach to student:"<<"\n";
    cin>>subject;
    cout<<"enter salary of teacher:"<<"\n";
    cin>>salary;
    cout<<"enter residencial address of teacher:"<<"\n";
    cin>>address;
}

void Teacher::putdata()
{
    cout<<"id of teacher is-"<<id<<"\n";
    cout<<"name of teacher is-"<<name<<"\n";
    cout<<"department od teacher is-"<<dept<<"\n";
    cout<<"subject of teacher is-"<<subject<<"\n";
    cout<<"salary of teacher is-"<<salary<<"\n";
    cout<<"address of teacher is-"<<address<<"\n";
}

int main()
{
    Teacher t1;
    cout<<"-------TEACHER DETAILS--------"<<"\n";
    t1.getdata();
    t1.putdata();

    return 0;
}
    

                            CONSTRUCTOR


#include<iostream>
using namespace std;

class Teacher
{
    private:
    float salary;
    string address;

    public:
    Teacher()  //NON PARAMATERIZED CONSTRUCTOR
    {
         cout<<"hii i am construction"<<"\n";
    }

    string name,dept,subject;
    int id;
    void getdata();
    void putdata();
};

void Teacher::getdata()
{
    cout<<"enter id of teacher:"<<"\n";
    cin>>id;
    cout<<"enter name of teacher:"<<"\n";
    cin>>name;
    cout<<"enter department of teacher:"<<"\n";
    cin>>dept;
    cout<<"enter subject that teacher teach to student:"<<"\n";
    cin>>subject;
    cout<<"enter salary of teacher:"<<"\n";
    cin>>salary;
    cout<<"enter residencial address of teacher:"<<"\n";
    cin>>address;
}

void Teacher::putdata()
{
    cout<<"id of teacher is-"<<id<<"\n";
    cout<<"name of teacher is-"<<name<<"\n";
    cout<<"department od teacher is-"<<dept<<"\n";
    cout<<"subject of teacher is-"<<subject<<"\n";
    cout<<"salary of teacher is-"<<salary<<"\n";
    cout<<"address of teacher is-"<<address<<"\n";
}

int main()
{
    Teacher t1;  //consructor
    cout<<"-------TEACHER DETAILS--------"<<"\n";
    t1.getdata();
    t1.putdata();

    return 0;
} 



#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int i, string n, float m = 0.0)  // default value for marks
    {
        id = i;
        name = n;
        marks = m;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "Rahul", 85.5);  // constructor called
    s1.display();

    return 0;
}
    

                            COPY CONSTRUCTOR

#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int id, string name, float marks = 0.0)  // default value for marks
    {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "VED", 93.3);  // constructor called
    s1.display();
    
    Student s2(s1);  // copy constructor called
    s2.display();
    return 0;
}



#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int id, string name, float marks = 0.0)  // default value for marks
    {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }

    Student(Student &s)  // COPY CONSTRUCTOR
    {
        cout<<"i am custom copy constructor"<<"\n";
        this->id = s.id;
        this->name = s.name;
        this->marks = s.marks;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "VED", 93.3);  // constructor called
    s1.display();
    
    Student s2(s1);  // copy constructor called
    s2.display();
    return 0;
}



                        Destructor


#include<iostream>
using namespace std;

class Student
{
    int id;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int i, string n, float m = 0.0)
    {
        id = i;
        name = n;
        marks = m;
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for student: " << name << endl;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1(101, "VED", 93.3);  // constructor called
    s1.display();

    return 0;   // destructor called automatically here
}
*/
