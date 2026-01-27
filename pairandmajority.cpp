/*
                                PAIR SUM
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=4;
    int array[10]={2,7,11,15};
    int target=9;
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[i]+array[j]==target)
            {
                cout<<"index="<<i<<" "<<j<<endl;
                cout<<"num="<<array[i]<<" "<<array[j];
            }
        }
    }
return 0;
}


#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int n=nums.size();

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=13;

    vector<int> ans= pairsum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;
}

two pointer approch

#include<iostream>
using namespace std;
int main()
{
    int array[10]={2,7,11,15};
    int n=4;
    int target=26;
    int i=0,j=n-1,pairsum;

    while(i<j)
    {
        pairsum=array[i]+array[j];
        if(pairsum>target)
        {
            j--;
        }
        else if(pairsum<target)
        {
            i++;
        }
        else
        {
            cout<<i<<" "<<j;
            break;
        }
    }
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> ans;
    int i = 0, j = nums.size() - 1;

    while(i < j)
    {
        int sum = nums[i] + nums[j];

        if(sum > target)
            j--;
        else if(sum < target)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=26;

    vector<int> ans= pairsum(nums,target);
    cout<<ans[0]<<","<<ans[1]<<endl;

    return 0;
}


majority elements

1.brute force method

*/

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,2,1,1};
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        int freq = 0;
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                freq++;
        }

        if(freq > n/2)
        {
            cout << "Majority element: " << arr[i];
            break;
        }
    }
    return 0;
}




