#include<iostream>
using namespace std;

class Shapes
{
    public:
    float lenght,breadth,height,radius;
    const float pi=3.14;

    void Square()
    {
        cout<<"enter the sides of lenght:\n";
        cin>>lenght;
        cout<<"area of  square="<<lenght*lenght<<"\n";
        cout<<"perimeter of square="<<4*lenght<<"\n";
    }

    void rectangle()
    {
        cout<<"enter the lenght:"<<"\n";
        cin>>lenght;
        cout<<"enter the breadth:"<<"\n";
        cin>>breadth;
        cout<<"area of rectangle="<<lenght*breadth<<"\n";
        cout<<"perimeter of rectangle="<<2*(lenght+breadth)<<"\n;";
    }

    void triangle()
    {
        cout<<"enter the lenght:"<<"\n";
        cin>>lenght;
        cout<<"enter the breadth:"<<"\n";
        cin>>breadth;
        cout<<"enter the height:"<<"\n";
        cin>>height;
        cout<<"area of triangle="<<0.5*breadth*height<<"\n";
        cout<<"perimeter of triangle="<<lenght*lenght*lenght<<"\n";

    }

    void circle()
    {
        cout<<"enter the radius:"<<"\n";
        cin>>radius;
        cout<<"area of circle="<<pi*radius*radius<<"\n";
        cout<<"perimeter of circle="<<2*pi*radius<<"\n";
    }

    void sphere()
    {
        cout<<"enter the radius"<<"\n";
        cin>>radius;
        cout<<"area of sphere="<<4*pi*radius<<"\n";
    }

    void cylinder()
    {
        cout<<"enter the radius:"<<"\n";
        cin>>radius;
        cout<<"enter the height:"<<"\n";
        cin>>height;
        cout<<"area of cylinder="<<2*pi*radius*(height+radius)<<"\n";
        cout<<"curved area surface="<<2*pi*radius*height;
    }
};

int main()
{
    Shapes s;
    int choice;

    do
    {
        cout<<"--------------------------"<<"\n";
        cout<<"---AREA OF SHAPES---\n";
        cout<<"1 square \n";
        cout<<"2 rectangle";
        cout<<"3 triangle\n";
        cout<<"4 circle\n";
        cout<<"5 sphere\n";
        cout<<"6 cylinder\n";
        cout<<"7 exit...\n";

        cout<<"enter the choice:=";
        cin>>choice;

        switch(choice)
        {
            case 1:
            s.Square();
            break;

            case 2:
            s.rectangle();
            break;

            case 3:
            s.triangle();
            break;

            case 4:
            s.circle();
            break;

            case 5:
            s.sphere();
            break;

            case 6:
            s.cylinder();
            break;

            case 7:
            cout<<"exiting\n";
            break;

            default:
            cout<<"invalid choice plz enter you choice.";
        }
        
    } while (choice!=7);
    
return 0;
}