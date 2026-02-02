/*  
BRUTE FORCE 

#include <iostream>
using namespace std;

int main()
{
    int nums[10] = {1, 2, 3, 4};
    int n = 4;
    int ans[10];   

    for(int i = 0; i < n; i++)
    {
        int product = 1;
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                product *= nums[j];
            }
        }
        ans[i] = product;
    }

    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int nums[10] = {1, 2, 3, 4};
    int n = 4;
    int ans[10];

    for(int i = 0; i < n; i++)
    {
        ans[i] = 1;  
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                ans[i] *= nums[j];
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}



#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {1, 2, 3, 4};
    int n = 4;

    int prefix[4];
    int suffix[4];
    int ans[4];

    // initialize
    prefix[0] = 1;
    suffix[n-1] = 1;

    // prefix array
    for(int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i-1] * nums[i-1];
    }

    // suffix array
    for(int i = n-2; i >= 0; i--)
    {
        suffix[i] = suffix[i+1] * nums[i+1];
    }

    // product except self
    for(int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * suffix[i];
    }

    // output
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}




#include <iostream>
using namespace std;

int main()
{
    int nums[4] = {1, 2, 3, 4};
    int n = 4;
    int ans[4];

    // Step 1: prefix product stored directly in ans
    ans[0] = 1;
    for(int i = 1; i < n; i++)
    {
        ans[i] = ans[i-1] * nums[i-1];
    }

    // Step 2: suffix product using one variable
    int suffix = 1;
    for(int i = n-1; i >= 0; i--)
    {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    // Output
    for(int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}


*/
