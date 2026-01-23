/*
#include<iostream>
using namespace std;

int main()
{
    int marks[5]={20,24,21,25,67};
    marks[0]=23;
    int size=5;

    //int sz=sizeof(marks)/sizeof(int);
    //cout<<sz;

    
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<"\n";
    }

    //cout<<marks[0];
    //cout<<marks[1];
    //cout<<marks[2];
    //cout<<marks[3];
    //cout<<marks[4];

    return 0;
}



#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int size=5;
    for(int i=0;i<size;i++)
    {
        cout<<"enter marks";
        cin>>marks[i];
        cout<<"\n";
    }

    for(int i=0;i<size;i++)
    {
        cout<<"marks=\n"<<marks[i];
    }


    return 0;
}




//smallest & largest

#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[]={5,15,22,1,-15,24};
    int size=6;

    int smallest= INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(nums[i]<smallest)
        {
            smallest=nums[i];
        }
    }
    cout<<"smallest="<<smallest<<"\n";

    return 0;

}


#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int largest= INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(nums[i]>largest)
        {
            largest=nums[i];
        }
    }
    cout<<"largest="<<largest;

    return 0;
}


#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallIndex = 0;
    int largeIndex = 0;

    for(int i = 0; i < size; i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
            smallIndex = i;
        }

        if(nums[i] > largest)
        {
            largest = nums[i];
            largeIndex = i;
        }
    }

    cout << "smallest index = " << smallIndex << "\n";
    cout << "largest index = " << largeIndex;

    return 0;
}




//linear search

#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int target)
{
    for(int i=0;i<size;i++) 
    {
        if(arr[i]==target)
        {
            cout<<"element successfully found\n";
            return i;
        }
        
    }
    cout<<"element not found\n";
    return -1;
    
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target=8;

    cout<<linear_search(arr,size,target);
}




//linear search

#include<iostream>
using namespace std;

int linear_search(int arr[],int size,int target)
{
    int i;

    for(int i=0;i<size;i++) 
    {
        if(arr[i]==target)
        {
            cout<<"element successfully found at position"<<i+1<<"\n";
            
            break;

        }       
    }
    if(i>size)
    {
        cout<<"target not found";
    }
}

int main()
{
    int arr[]={4,2,7,8,1,2,5};
    int size=7;
    int target=1;
    
    cout<<linear_search(arr,size,target);
}






//reverse array using two pointer appraoch


#include<iostream>
using namespace std;

int reversearray(int arr[],int size)
{
    int start=0 ,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={22,31,12,67,90,78,44};
    int size=7;
    cout<<"revesed array=\n";
    
    reversearray(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";


    return 0;
}
*/