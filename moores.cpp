/*

MOORES VOTING ALGO


#include<iostream>
using namespace std;
int main()
{
    int i,array[10]={1,2,2,1,1};
    int n=5;
    int freq=0,ans=0;

    for(int i=0 ; i<n ; i++)
    {
        if(freq==0)
        {
            ans=array[i];
        }
        if(ans == array[i])
        {
            freq++;
        }
        else
        {
            freq--;         
        }
    }
    cout<<ans;

    return 0;
}





#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                ans = nums[i];
            }

            if (ans == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution obj;
    int result = obj.majorityElement(nums);

    cout << "Majority Element: " << result << endl;

    return 0;
}

*/