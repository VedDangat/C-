/*
#include<iostream>
using namespace std;
int main()
{
    int array[10]={10,23,54,11,6,78};
    int target;
    int i,n=6;
    cout<<"enter the element to search =";
    cin>>target;

    for(i=0;i<n;i++)
    {
        if(array[i]==target)
        {
            cout<<"emelent found search successfull!!!"
            <<" "<<"position="<<i<<" "<<"elem="<<array[i];
            break;
        }
    }

    return -1;

    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int array[10] = {2, 5, 7, 10, 45, 78, 90};
    int n = 7;
    int target;
    int low = 0, high = n - 1, mid;

    cout<<"enter the target elem to search:-";
    cin>>target;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == target)
        {
            cout << "Element found at index " << mid;
            return 0;   
        }
        else if (array[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << "Element not found";
    return 0;
}
*/

#include <iostream>
using namespace std;

void linear_search(int array[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            cout << "Element found successfully! ";
            cout << "Position = " << i << " Element = " << array[i] << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

void binary_search(int array[], int n, int target)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == target)
        {
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if (array[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Element not found" << endl;
}

int main()
{
    int array[10] = {1, 2, 6, 10, 19, 27, 72}; 
    int n = 7;
    int target;
    int choice;

    do
    {
        cout << "\n1. Linear Search\n";
        cout << "2. Binary Search\n";
        cout << "3. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2)
        {
            cout << "Enter target element: ";
            cin >> target;
        }

        switch (choice)
        {
            case 1:
                linear_search(array, n, target);
                break;

            case 2:
                binary_search(array, n, target);
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while (choice != 3);

    return 0;
}
