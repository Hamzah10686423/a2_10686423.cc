#include <iostream>

using namespace std;

int main()
{
    int value;
    cout<<"Enter a value"<<endl;
    cin>>value;
    if((value % 2)==0 || (value % 3)==0)
        cout<<value<<" is not a prime number"<<endl;
    else
        cout<<value<<" is a prime number"<<endl;

    return 0;
}
