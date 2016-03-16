#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "Set.h"


int main()
{
    Set<int>  test;
    Set<int>  test2;
    int value,n=0,m=0;
    cout<<"Enter number of values to be added to set"<<endl;
    cin>>n;
    cout<<"Please enter the values"<<endl;
    for(int i=0;i<n;i++){
    cin>>value ;
    test.insert(value);
    }
    cout<<"Please enter a value to delete"<<endl;
    cin>>value;
    test.remove(value);
    cout<<"Add a new value"<<endl;
    cin>>value;
    test.insert(value);
    cout<<"Search for a value\n"<<endl;
    cin>>value;
    if(test.contains(value))
    cout<<"the value exists"<<endl;

    cout<<"determine a subset size"<<endl;
    cin>>m;
    cout<<"enter the set values"<<endl;
    for(int i=0;i<m;i++){
        cin>>value;
        test2.insert(value);
    }
    if(test.isSubsetOf(test2))
        cout<<"the new set is a subset from the old set"<<endl;
        else cout<<"the new set isn't a subset of the old set"<<endl;









    return 0;
}
