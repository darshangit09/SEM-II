//Wirte Programme to that Checks entered number is positive or nagative. 
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Eneter Integer Number: ";
    cin>>a;

    cout<<"\n";
    
    //logic
    if (a>=0)
    {
        cout<<"Entered Number is Positive";
    }
    else
    {
        cout<<"Entered Number is Nagative.";
    }
     else
        
    {
        cout<<"You have Entered Zero.";
    }
    
    
    return 0;    
}
