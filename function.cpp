/*
#include<iostream>
using namespace std;

void example()
{
    int num;
    cout<<"enter value of number ie age:";
    cin>>num;
    if(num>=18)
    {
        cout<<"person can vote";
    }
    else{
        cout<<"person cannot vote";
    }
}

int main()
{
    cout<<"---the voting eligiblity check---\n";
    example();

    return 0;
}


#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divi(int a, int b)
{
    return a / b;   // normal integer division
}
int main()
{
    int choice;
    int a, b;

    cout << "BASIC CALCULATOR\n";

    while (true)
    {
        cout << "\nEnter value of a: ";
        cin >> a;
        cout << "Enter value of b: ";
        cin >> b;

        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting...";
            break;
        }

        switch (choice)
        {
            case 1:
                cout << "Addition = " << sum(a, b);
                break;

            case 2:
                cout << "Subtraction = " << sub(a, b);
                break;

            case 3:
                cout << "Multiplication = " << mul(a, b);
                break;

            case 4:
                cout << "Division = " << divi(a, b);
                break;

            default:
                cout << "Invalid choice!";
        }
    }

    return 0;
}




#include<iostream>
using namespace std;

// Corrected factorial function
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << factorial(4) << "\n";
    cout << factorial(5);

    return 0;
}



//call by value

#include <iostream>
using namespace std;

void change(int x)
{
    x = 100;
}

int main()
{
    int a = 10;
    change(a);
    cout << a;   // Output: 10
    return 0;
}



//call by reference
#include <iostream>
using namespace std;

void change(int &x)
{
    x = 100;
}

int main()
{
    int a = 10;
    change(a);
    cout << a;   // Output: 100
    return 0;
}


----------------------------------
1234=1+2+3+4=10

#include<iostream>
using namespace std;

int sumDigits(int num)
{
    int digitsum=0;

    while(num>0)
    {
        int lastdigit=num%10;
        num/=10;
        digitsum+=lastdigit;
    }
    return digitsum;
    
}

int main()
{
    cout<<"sum="<<sumDigits(1234)<<endl;
    return 0;
}

----------------------------------
binomial coefficient

#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}

int nCr(int n,int r)
{
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nr=factorial(n-r);

    return fact_n/(fact_r*fact_nr);
}

int main()
{
    int n=8,r=2;
    cout<<nCr(n,r);

    return 0;
}


//Fibonacci Series
#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n = 6;
    fibonacci(n);
    return 0;
}
*/
