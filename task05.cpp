#include<iostream>
using namespace std;

int main()
{
    string arr[4];

    for(int x = 0 ; x < 4 ; x++)
    {
        cout<<"Enter value no. "<<x+1<<" ";
        cin>>arr[x];
    }

    int count = 1;

    for(int x = 0 ; x < 4 ; x++)
    {
        if(arr[x] == arr[x+1])
        {
            count++;
        }
    }

    if(count == 4)
    {
        cout<<"true";
    }

    else
    {
        cout<<"false";
    }
}