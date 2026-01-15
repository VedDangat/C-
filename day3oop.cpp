/*
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int fnd)
{
    for(int i=0;i<n;i++)
    {
        if(fnd==arr[i])
        {
            return (i+1);
        }
    }
    return -1;
}
int binarysearch(int arr[],int n,int fnd)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
       if(arr[mid]==fnd)
       {
        return (mid+1);
       }
        else if(arr[mid]<fnd)
       {
         s=mid+1;
       }
        else if(arr[mid]>fnd)
       {
         e=mid-1;
       }
       mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{

    int n;
    cout<<"Enter the no of elements"<<endl;
    cin>>n;

    int arr[100];

    int fnd;
    cout<<"Enter the element to be found"<<endl;
    cin>>fnd;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element"<<endl;
        cin>>arr[i];
    }
    int nm=linearsearch(arr,n,fnd);
    cout<<nm<<endl;
    int gk=binarysearch(arr,n,fnd);
    cout<<gk<<endl;

    return 0;
}







#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;
    int area;

    void getData()
    {
        cout << "Enter value of l (length): ";
        cin >> l;
        cout << "Enter value of b (breadth): ";
        cin >> b;
    }

    void calculate()
    {
        area = l * b;
    }

    void putData()
    {
        cout << "Area of rectangle is: " << area;
    }
};

int main()
{
    Rectangle r1;
    r1.getData();
    r1.calculate();
    r1.putData();

    return 0;
}





#include <iostream>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;
    int area, peremeter;
    void getData();
    void calculatearea();
    void calculatepere();
    void putData();
};

    void Rectangle:: getData()
    {
        cout << "Enter value of l (length): ";
        cin >> l;
        cout << "Enter value of b (breadth): ";
        cin >> b;
    }

    void Rectangle:: calculatearea()
    {
        area = l * b;
    }
    
    void Rectangle:: calculatepere()
    {
    	peremeter=2*(l+b);
    }
 
    void Rectangle:: putData()
    {
        cout << "Area of rectangle is: " << area<<"\n";
        cout<<"Peremeter of rectangle is:"<<peremeter;
    }


int main()
{
    Rectangle r1;
    r1.getData();
    r1.calculatearea();
    r1.calculatepere();
    r1.putData();

    return 0;
}




#include <iostream>
using namespace std;

class Shapes
{
public:
    float pi;
    int l, b, r;
    float area, perimeter;

    void getData();
    void calculateSquare();
    void calculateRectangle();
    void calculateCircle();
    void putData();
};

void Shapes::getData()
{
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    cout << "Enter radius: ";
    cin >> r;
}

void Shapes::calculateSquare()
{
    area = l * l;
    perimeter = 4 * l;
}

void Shapes::calculateRectangle()
{
    area = l * b;
    perimeter = 2 * (l + b);
}

void Shapes::calculateCircle()
{
    pi = 3.14;
    area = pi * r * r;
    perimeter = 2 * pi * r;
}

void Shapes::putData()
{
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

int main()
{
    Shapes s;
    int choice;

    cout << "Choose Shape:\n";
    cout << "1. Square\n";
    cout << "2. Rectangle\n";
    cout << "3. Circle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    s.getData();

    switch (choice)
    {
    case 1:
        cout << "\nSquare:\n";
        s.calculateSquare();
        s.putData();
        break;

    case 2:
        cout << "\nRectangle:\n";
        s.calculateRectangle();
        s.putData();
        break;

    case 3:
        cout << "\nCircle:\n";
        s.calculateCircle();
        s.putData();
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}






*/