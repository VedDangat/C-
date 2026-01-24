/*
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector <int>vector={1,2,3,4};   //create vector
    //cout<<vector[2];

    //vector<int>vec(3,1);
    //cout<<vec[0];

    vector<int> vec={1,2,3,4};
   //vector<char> vec={'a','b','c','d'};

    vec.push_back(5);               //push
    vec.push_back(6);

    vec.pop_back();                   //pop

    cout<<"vector front="<<vec.front()<<"\n";           //print front value
    cout<<"vector back="<<vec.back()<<"\n";             //print back value

    cout<<"element at="<<vec.at(2)<<"\n";               //print elem as specific index

     cout<<"size of vector="<<vec.size()<<"\n";         //size of created vector

    for(int value : vec)                                //for each loop 
    {
        cout<<value<<"\n";
    }


    return 0;
}



#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);

    cout<<vec.size()<<"\n";
    cout<<vec.capacity()<<"\n";

    return 0;
}




//single number



#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums={4,1,2,1,2};
    int ans=0;
    for(int val:nums)
    {
        ans=ans^val;
    }
    cout<< ans;

    return 0;
}


#include<iostream>
using namespace std;
int main()
{
    int array[10]={4,1,2,1,2,3,5,3,5};
    int ans=0;
    int size=10;
    for(int i=0;i<size;i++)
    {
        ans=ans^array[i];
    }
    cout<<ans;

    return 0;
}
*/