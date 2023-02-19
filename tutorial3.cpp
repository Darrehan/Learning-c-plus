// using of pointers basics
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int *p;
    p=&a;    // assinging address of a to pointer p
    cout<<"the value of a is ="<<a<<"\n";
    cout<<"the value of p is ="<<*p<<"\n"; // in derefrencing we use *p not P
    cout<<"the value of *p is ="<<p<<"\n"; 
}