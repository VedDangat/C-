/*
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    cout<<&a<<"\n";
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    cout<<ptr<<"\n";
    cout<<&a<<"\n";
    cout<<&ptr<<"\n";

    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    int **ptr2=&ptr;

    cout<<a<<"\n";
    cout<<&a<<"\n";
    cout<<&ptr<<"\n";
    cout<<ptr2<<"\n";
    
    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;

    int **ptr2=&ptr;

    cout<<*(&a)<<"\n";
    cout<<*(ptr)<<"\n";
    cout<<*(&ptr)<<"\n";
    cout<<**(ptr2)<<"\n";
    cout<<**(&ptr2)<<"\n";

    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *ptr=&a;
    int **qtr=&ptr;

    cout<<*ptr<<"\n";
    cout<<**qtr<<"\n";
    cout<<ptr<<"\n";
    cout<<*qtr;

    return 0;
}



#include <iostream>
using namespace std;

// pass by value
void changeA(int a)
{
    a = 20;
}

// pass by reference (using pointer)
void changeAnew(int *ptr)
{
    *ptr = 20;
}

int main()
{
    int a = 10;

    changeA(a);
    changeAnew(&a);

    cout << a << "\n";

    return 0;
}
    

#include<iostream>
using namespace std;
int main()
{
    int array[10]={1,2,3,4,5};
    cout<<array;
    return 0;
}



#include<iostream>
using namespace std;
int main()
{   
    int array[]={1,2,3,4,5};

    int a=10;
    int *ptr=&a;

    cout<<ptr<<"\n";

    //ptr++;
    // ptr--;
    //ptr=ptr+2;

    cout<<ptr<<"\n";

    return 0;
}


#include<iostream>
using namespace std;
int main()
{   
    int array[]={1,2,3,4,5};
    int *ptr= array;

    cout<<*(ptr+1)<<"\n";
    cout<<*(ptr+3)<<"\n";
    ptr++;

    cout<<*ptr<<"\n";

    return 0;
}

*/