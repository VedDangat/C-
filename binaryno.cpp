/*
//decimal to binary
#include<iostream>
using namespace std;

int decimaltobinary(int decNum)
{
    int ans=0,pow=1;
    while(decNum>0)
    {
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}

int main()
{
    int decNum;
    cout<<"enter any number to convet it to binary:";
    cin>>decNum;

    cout<<decimaltobinary(decNum);
    return 0;
}




//binary to decimal
#include<iostream>
using namespace std;

int binarytodecimal(int binary)
{
    int ans=0,pow=1;
    while(binary>0)
    {
        int rem=binary%10;
        ans+=rem*pow;

        binary/=10;
        pow *=2;
    }
    return ans;
}

int main()
{
    int binary;
    cout<<"enter number to convet to decimal:";
    cin>>binary;

    cout<<binarytodecimal(binary);
    return 0;
    
}




#include<iostream>
using namespace std;
//tobinay
int decimaltobinary(int decNum)
{
    int ans=0,pow=1;
    while(decNum>0)
    {
        int rem=decNum%2;
        decNum/=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
//todecimal
int binarytodecimal(int binary)
{
    int ans=0,pow=1;
    while(binary>0)
    {
        int rem=binary%10;
        ans+=rem*pow;

        binary/=10;
        pow *=2;
    }
    return ans;
}

int main()
{
    int binary ,decNum,choice;
    do
    {
        cout<<"1.decimal to binary\n";
        cout<<"2.binary to decimal\n";
        cout<<"3.exit\n";
        cout<<"enter the choice";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"--decimal to binary--\n";
                cout<<"enter number to convert:\n";
                cin>>decNum;

                cout<<decimaltobinary(decNum)<<"\n";
                break;

            case 2:
                cout<<"--binary to decimal--\n";
                cout<<"enter the number to convert\n";
                cin>>binary;

                cout<<binarytodecimal(binary)<<"\n";
                break;

            case 3:
                cout<<"exiting...";
                break;

            default:
                cout<<"invalid choice";
        }

    }while(choice!=3);

    return 0;
}

*/
