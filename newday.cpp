/*                       SINGLE INHERITANCE

#include<iostream>
using namespace std;

class Teacher 
{
public:
    void teach() 
    {
        cout << "Teacher is teaching" << endl;
    }
};

class Student : public Teacher 
{
public:
    void study() 
    {
        cout << "Student is studying" << endl;
    }
};
int main()
{
    Student s;
    s.teach();
    s.study();

    return 0;
}


                    MULTILEVEL INHERITANCE

#include<iostream>
using namespace std;

class Person
{
public:
    void identity()
    {
        cout<<"i am person"<<"\n";
    }
};

class Teacher: public Person
{
public:
    void teach()
    {
        cout<<"i am teacher"<<"\n";
    }
};

class Student : public Teacher
{
public:
    void study()
    {
        cout<<"i am studying"<<"\n";
    }
};

int main()
{
    Student s1;
    s1.identity();
    s1.teach();
    s1.study();

    return 0;
}



                    Hierarchical Inheritance

#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teacher teaches" << endl;
    }
};

class Student : public Teacher {
public:
    void study() {
        cout << "Student studies" << endl;
    }
};

class Principal : public Teacher {
public:
    void manage() {
        cout << "Principal manages school" << endl;
    }
};

int main() {
    Student s;
    Principal p;

    s.teach();
    s.study();

    p.teach();
    p.manage();

    return 0;
}


                        Multiple Inheritance

#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a person" << endl;
    }
};

class Teacher {
public:
    void teach() {
        cout << "Teacher teaches" << endl;
    }
};

class Student : public Person, public Teacher {
public:
    void study() {
        cout << "Student studies" << endl;
    }
};

int main() {
    Student s;
    s.show();
    s.teach();
    s.study();
    return 0;
}


                        Hybrid Inheritance

#include <iostream>
using namespace std;

class Person {
public:
    void info() {
        cout << "I am a person" << endl;
    }
};

class Teacher : public Person {
public:
    void teach() {
        cout << "Teacher teaches" << endl;
    }
};

class Sports {
public:
    void play() {
        cout << "Plays sports" << endl;
    }
};

class Student : public Teacher, public Sports {
public:
    void study() {
        cout << "Student studies" << endl;
    }
};

int main() {
    Student s;
    s.info();
    s.teach();
    s.play();
    s.study();
    return 0;
}

                        POLYMORPHISM

#include<iostream>
using namespace std;

class Student
{
    public:
    string name;

    Student()
    {
        cout<<"non perematerized constructor";
    }

    Student(string name)
    {
        this->name=name;
        cout<<"perematerized constructor";
    }
};

int main()
{
    //Student s1;
    Student s1("ved dangat");
    return 0;
}


#include<iostream>
using namespace std;

class Print
{
    public:
        void show(int x)
        {
            cout<<"int"<<x<<"\n";
        }

        void show(char ch)
        {
            cout<<"character"<<ch<<"\n";
        }
};

int main()
{
    Print p1;
    p1.show('&');

    return 0;
}
 
                            OVERLOADING

#include <iostream>
using namespace std;

class Print {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(float b) {
        cout << "Float: " << b << endl;
    }
};

int main() {
    Print p;
    p.show(10);
    p.show(5.5);
    return 0;
}

                        OVERRIDING
#include <iostream>
using namespace std;

class Teacher {
public:
    virtual void work() {
        cout << "Teacher works" << endl;
    }
};

class Student : public Teacher {
public:
    void work() {
        cout << "Student studies" << endl;
    }
};

int main() {
    Teacher* t;
    Student s;
    t = &s;
    t->work();
    return 0;
}

                       Data Abstraction 

#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // hidden data

public:
    void setBalance(int b) {
        balance = b;
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    acc.showBalance();
    return 0;
}


#include<iostream>
#include<string>
using namespace std;

void fun()
{
    static int x=0;
    cout<<"x"<<x<<"\n";
    x++;
}
int main()
{
    fun();
    fun();
    fun();

    return 0;
} */


