/*#include<iostream>
using namespace std;
int main()
{
    int i,j,num;                                 //1234
    cout<<"enter value of num:";                 //1234
    cin>>num;                                    //1234
    for(i=1;i<=num;i++)                          //1234
    {
        for(j=1;j<=num;j++)
        {
            cout<<"*";  //j
        }
        cout<<"\n"; 
    }



    return 0;
}


#include<iostream>
using namespace std;
int main()
{    
    int i,j,num;
    cout<<"enter value of num:";
    cin>>num;
    for(i=0;i<num;i++)
    {   
        char ch='A';                    //ABCD
        for(j=0;j<num;j++)              //ABCD
        {                               //ABCD
            cout<<ch;                   //ABCD
            ch+=1;
        }
        cout<<"\n";
    }
 return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int i ,j,n;
    cout<<"enter number value:";
    cin>>n;
    int num=1;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)                //123
        {                               //456   
            cout<<num<<" ";             //789
            num++;
        }
        cout<<"\n";
    }



    return 0;
}


#include<iostream>
using namespace std;
int main()
{
      int i ,j,n;
    cout<<"enter number value:";
    cin>>n;
    char ch='A';
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)                
        {                                  
            cout<<ch<<" ";             
            ch++;
        }
        cout<<"\n";
    }
 

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter value of num:";
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter value of num:";
    cin>>num;
    for(i=0;i<num;i++)
    {
      for(j=0;j<i+1;j++)
      {
           cout<<i+1;
      }
      cout<<"\n";
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int i, j, num;
    cout << "Enter value of num: ";
    cin >> num;

    char ch = 'A';

    for(i = 0; i < num; i++)
    {
        for(j = 0; j <= i; j++)
        {
            cout << ch;
        }
        ch++;   
        cout << "\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter vale of n:";
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=1;j<i+1;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"enter the number";
    cin>>num;
    for(i=0;i<num;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;

    int num=1;

    for(i=0;i<n;i++)
    {
       for(j=0;j<i+1;j++)
        {
            cout<<num;
            num++;
        }
        cout<<"\n";
    }
    return 0;
}


/pyramid                                               1
                                                      121
                                                     12321
                                                    1234321
                                                   123454321
                                                  12345654321

#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"enter n values:";
    cin>>num;
    for(i=0;i<num;i++)                  /
    {
        for(j=0;j<num-i-1;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=i+1;j++)
        {
            cout<<j;
        }
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}

*/
