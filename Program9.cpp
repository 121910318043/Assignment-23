#include<iostream>
using namespace std;
//Write a C++ program to find the maximum of two numbers.
int main()
{
    int a,b;
    cout<<"Enter two number ";
    cin>>a;
    cin>>b;
    if(a>b)
    {
        cout<<"Maximum of "<<a<<" and "<<b<<" is "<<a;
    }
    else
        cout<<"Maximum of "<<a<<" and "<<b<<" is "<<b;
    return 0;
}
