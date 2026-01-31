/*

#include <iostream>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;

        long binform = n;  // use long to safely handle INT_MIN

        if (binform < 0) {
            x = 1 / x;
            binform = -binform;
        }

        double ans = 1.0;

        while (binform > 0) {
            if (binform % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }

        return ans;
    }
};

int main() {
    Solution sol;

    double x;
    int n;

    cout << "Enter base (x): ";
    cin >> x;

    cout << "Enter exponent (n): ";
    cin >> n;

    double result = sol.myPow(x, n);
    cout << "Result: " << result << endl;

    return 0;
}



#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int array[] = {7,1,5,3,6,4};
    int n = 6;
    int maxprofit = 0;
    int bestbuy = array[0];

    for(int i = 1; i < n; i++)
    {
        if(array[i] > bestbuy)
        {
            maxprofit = max(maxprofit, array[i] - bestbuy);
        }
        bestbuy = min(bestbuy, array[i]);
    }

    cout << maxprofit;
    return 0;
}

*/