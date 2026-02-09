/*
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,1,2,3,3,4,4};
    int n=7;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^array[i];
    }
    cout<<ans;

    return 0;
}



#include<iostream>
using namespace std;
int main()
{
    int array[]={1,1,2,3,3,4,4};
    int n=7;
    for(int i=0;i<n;i++)
    {
        if(array[i-1] !=array[i] && array[i] != array[i+1])
        {
            cout<<array[i];
            break;
        }
    }

    return 0;
}

*/
#include<iostream>
using namespace std;
int main()
{
    int array[]={1,1,2,2,3,3,4,4,5};
    int n=9;
    int start=0, end=n-1;
    int mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(array[mid] != array[mid-1] && array[mid] != array[mid+1])
        {
            cout << array[mid];
            return 0;
        }
        if(mid%2==0)
        {
            if(array[mid-1]==array[mid])
        {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else{
            if(array[mid-1]==array[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }

    return 0;
}
