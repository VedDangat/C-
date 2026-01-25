/*
//print sub array

#include<iostream>
using namespace std;
int main()
{
    int start,end,n=5;
    int array[5]={1,2,3,4,5};
    for(start=0;start<n;start++)
    {
        for(end=start;end<n;end++)
        {
            for(int i=start;i<=end;i++)
            {
                cout<<array[i];
            }
            cout<<" ";
        }
        cout<<"\n";            
        }
    return 0;
}



//brute force approch

#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int start,end,n=7;
    int array[10]={3,-4,5,4,-1,7,-8,};
    int maxsum=INT_MIN;

    for(start=0;start<n;start++)
    {
        int currentsum=0;
        for(end=start;end<n;end++)
        {
            currentsum+=array[end];
            maxsum=max(currentsum,maxsum);     
        }           
    }
    cout<<"max subarray="<<maxsum;

    return 0;
}



//kadanes algo

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int currentsum=0;
    int max_sum=INT_MIN;
    vector<int> nums={4,-4,5,4,-1,7,8};
    
    for(int val : nums)
    {
        currentsum+=val;
        max_sum=max(currentsum,max_sum);
        if(currentsum<0)
        {
            currentsum=0;
        }
        
    }
    cout<<max_sum;
    return 0;
}
*/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int array[10]={3,-4,5,4,-1,7,-8,};
    int i,n=7;
    int currsum=0;
    int max_sum=INT_MIN;

    for(i=0;i<n;i++)
    {
        currsum+=array[i];
        max_sum=max(currsum,max_sum);
        if(currsum < 0)
        {
            currsum=0;
        }
    }
    cout<<max_sum;
    return 0;
}