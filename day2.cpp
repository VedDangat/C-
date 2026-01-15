/*#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number(num):-";
    cin>>num;
    if(num<0)
    {
        cout<<"negative number";

    }
    else if (num>0)
    {
        cout<<"number is positive";
    }
    else
    {
        cout<<"equal to zero";
    }
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"enter the marks:-";
    cin>>marks;

    if(marks>90)
    {
        cout<<"grade A";
    }
    else if(marks>80 && marks<90)
    {
        cout<<"grade B";
    }
    else if(marks>70 && marks<80)
    {
        cout<<"grade C";
    }
    else if(marks>60 && marks<70)
    {
        cout<<"grade D";
    }
    else
    {
        cout<<"grade F";                
    }
    return 0;
}


#include<iostream>
using namespace std;    

int main()
{
    char character;
    cout<<"enter the character:-";
    cin>>character;
    if(character>='a' && character<='z')
    {
        cout<<"the charcter is in lower case";
    }
    else if(character>='A' && character<='Z')
    {
        cout<<"the character is in upper case;";
    }
    else
    {
        cout<<"the character is not an alphabet;";
    }
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int count=1,n;
    cout<<"enter the value of n:";
    cin>>n;

    while(count<=n)
    {
        cout<<count;
        count++;
    }
    cout<<"\n";

    return 0;

}



#include<iostream>
using namespace std;

int main()
{
    while(true)
    {
        cout<<"hello bro";
    }
    return 0;
}


#include<iostream>
using namespace std;

int main()
{
    int i ,n;
    cout<<"enter value of n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cout<<i<<" ";
    }
    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter value of n for the sum";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"sum is:"<<sum;

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"enter the value of n";
    cin>>n;
    while(i<=n)
    {
        sum+=i;
        i=i+2;
    }
    cout<<"sum is:"<<sum;

    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int i,num,sum=0;
    cout<<"enter value of num:";
    cin>>num;
    for(i=0;i<=num;i=i+2)
    {
        cout<<i<<" ";
        sum+=i;
    }

    cout<<"sum is-"<<sum;

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"enter value of n";
    cin>>num;
    do
    {
        cout<<"hello world";
        
    }while(i<=num);


    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the value of n:";
    cin>>n;
    bool isPrime=true;
    for(i=2;i<n-1;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"the number is not prime number";
    }
    else
    {
        cout<<"the number is prime number";
    }

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int n, i;
    bool isPrime = true;

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "The number is prime";
    else
        cout << "The number is not prime";

    return 0;
}

#include <iostream>
using namespace std;    
int main()
{
    int n,i;
    bool isPrime=true;
    cout<<"enter the value of n:";
    cin>>n; 
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout<<"the number is prime number";
    }
    else
    {
        cout<<"the number is not prime number";
    }

    return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }



    return 0;
}