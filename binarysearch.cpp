/*
#include <iostream>
using namespace std;

int main()
{
    int array[] = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;
    int n=7;

    int low = 0;
    int high = n-1;  // size - 1

    while (low <= high)
    {
        int mid =  (high + low) / 2;   //high+(low-high)/2; 

        if (target > array[mid])
        {
            low = mid + 1;
        }
        else if (target < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << "Target found at index: " << mid << endl;
            return 0;
        }
    }

    cout << "Target not found" << endl;
    return 0;
}




#include <iostream>
using namespace std;

int main()
{
    int array[] = {-1, 0, 3, 4, 5, 9, 12,18};
    int target; //= 12;
    int n=8;

    int low = 0;
    int high = n-1;

    cout<<"Enter target value to search:";
    cin>>target;

    while (low <= high)
    {
        int mid = low+(high-low)/2;   //(high + low) / 2;

        if (target > array[mid])
        {
            low = mid + 1;
        }
        else if (target < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << "Target found at index: " << mid << endl;
            return 0;
        }
    }

    cout << "Target not found" << endl;
    return 0;
}





class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if (target > nums[mid])
            {
                low = mid + 1;
            }
            else if (target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};





#include <iostream>
using namespace std;

// Normal (Non-Recursive) Binary Search
int binarySearch(int arr[], int n, int target)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (target > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

// Recursive Binary Search
int recursiveBinarySearch(int arr[], int low, int high, int target)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return mid;
    else if (target < arr[mid])
        return recursiveBinarySearch(arr, low, mid - 1, target);
    else
        return recursiveBinarySearch(arr, mid + 1, high, target);
}

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12, 18};
    int n = 8;
    int choice, target, result;

    do
    {
        cout << "\n1. Normal Binary Search";
        cout << "\n2. Recursive Binary Search";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter target: ";
                cin >> target;
                result = binarySearch(arr, n, target);
                break;

            case 2:
                cout << "Enter target: ";
                cin >> target;
                result = recursiveBinarySearch(arr, 0, n - 1, target);
                break;

            case 3:
                cout << "Exiting program...";
                break;

            default:
                cout << "Invalid choice";
                continue;
        }

        if (choice == 1 || choice == 2)
        {
            if (result != -1)
                cout << "Target found at index: " << result << endl;
            else
                cout << "Target not found" << endl;
        }

    } while (choice != 3);

    return 0;
}


#include <iostream>
using namespace std;

int binarysearch(int array[], int target, int low, int high)
{
    if (low > high)
        return -1;   

    int mid = low + (high - low) / 2;

    if (target > array[mid])
        return binarysearch(array, target, mid + 1, high);
    else if (target < array[mid])
        return binarysearch(array, target, low, mid - 1);
    else
        return mid;  
}

int main()
{
    int array[] = {-1, 0, 3, 4, 5, 9, 12, 18};
    int n = 8;
    int target;

    cout << "Enter target value to search: ";
    cin >> target;

    int result = binarysearch(array, target, 0, n - 1);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}

*/