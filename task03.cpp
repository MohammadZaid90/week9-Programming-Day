#include<iostream>
using namespace std;

int oddEven(string word);

int main()
{
    string word;
    cout<<"Enter the word: ";
    cin>>word;

    int ans = oddEven(word);
    cout<<ans;
}

int oddEven(string word)
{
    int count = 0;
    while(word[count] != '\0')
    {
        count++;
    }

    if(count%2 == 0)
    {
        return true;
    }   

    if(count%2 != 0)
    {
        return false;
    }  
}