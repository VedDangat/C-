/* 
 
                                 LINEAR SEARCH

#include <iostream>
using namespace std;

int main() {
    int a[6] = {0, 3, 8, 9, 5, 3};
    int n = 6;

    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            cout << "Peak Index: " << i << endl;
            cout << "Peak Element: " << a[i] << endl;
            break;
        }
    }

    return 0;
}



                        BINARY SEARCH

#include <iostream>
using namespace std;

int main()
{
    int array[10] = {0, 3, 8, 9, 5, 2};
    int n = 6;

    int start = 1;
    int end = n - 2;
    int mid;
    int peakIndex;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (array[mid - 1] < array[mid] && array[mid] > array[mid + 1])
        {
            peakIndex = mid;
            break;
        }

        if (array[mid - 1] < array[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << "index="<<peakIndex << endl;
    cout << "elem="<<array[peakIndex];

    return 0;
}



                    LEETCODE
                    
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int start = 1;
        int end = a.size() - 2;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1]) {
                return mid;
            }
            else if (a[mid - 1] < a[mid]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
};

*/