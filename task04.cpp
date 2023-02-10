#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array you want: ";
    cin>>size;

    int arr[size];
    int count = 0;

    for(int i = 0 ; i < size ; i++)
    {
        cout<<"Enter the value no. "<<i+1<<" ";
        cin>>arr[i];
    }
    for(int x = 0 ; x < size ; x++)
    {
        if(arr[x]%10 == 7)
        {
            count++;
        }
    }

    if(count > 0)
    {
        cout<<"BOOM!";
    }

    else
    {
        cout<<"There is no 7 in the array!";
    }
}