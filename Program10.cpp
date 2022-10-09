#include<iostream>
using namespace std;
//Write a C++ program to add all the numbers of an array of size 10.
int main()
{
    int a[10],i,s=0;
    cout<<"Enter 10 values in the array ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<s;
    return 0;
}
