#include<iostream>
using namespace std;

int main()
{
    string fruit[4] = {"peace","apple","guava","watermelon"};
    int price[4] = {60,70,40,30};

    cout<<"Enter the Fruit name: ";
    string name;
    cin>>name;

    cout<<"Enter the Quantity you want: ";
    float quantity;
    cin>>quantity;

    int count = 0;

    for(int x = 0 ; x < 4 ; x++)
    {
        if(name == fruit[x])
        {
            count = count+x;
        }
    }
    cout<<count;

    int amount = quantity * price[count];
    cout<<"total price for your fruit is: "<<amount                                                     ;
}