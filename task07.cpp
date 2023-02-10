#include<iostream>
using namespace std;

int main()
{

    string s1;
    string s2;

    cout<<"Enter value for string S1: ";
    cin>>s1;
    
    cout<<"Enter value for string S2: ";
    cin>>s2;

    int count = 0;
    int idx = 0;
    int c = 0;

    while(s1[idx] != '\0')
    {
        idx++;
    }

    while(s2[count] != '\0')
    {
        count++;
    }

    for(int x = 0 ; x < idx ; x++)
    {
        for(int y = 0 ; y < count ; y++)
        {
            if(s1[x] == s2[y])
            {
                c++;
            }
        }
    }

    cout<<c;
}