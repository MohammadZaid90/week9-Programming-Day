#include<iostream>
using namespace std;

int main()
{
    int arr[3];

    int evenOddTransform;
    cout<<"Enter even-odd Transform: ";
    cin>>evenOddTransform;

    int a1,a2,a3;
    for(int x = 0 ; x < 3 ; x++)
    {
        cout<<"Enter the no. "<<x+1<<" ";
        cin>>arr[x];
    }

    for(int x = 0 ; x < evenOddTransform ; x++)
    {
        if(arr[x]%2 == 0)
        {
            arr[x] = arr[x] - (2*evenOddTransform);
        }

        else if(arr[x]%2 != 0)
        {
            arr[x] = arr[x] + (2*evenOddTransform);
        }
    }

    for(int i = 0 ; i < 3 ; i ++)
    {
        cout<<arr[i]<<",";
    }
}