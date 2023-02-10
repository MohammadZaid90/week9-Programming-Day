#include<iostream>
using namespace std;

int main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    int price = 500;

    string name;
    int count = 1,total;

    cout<<"Enter the name of movie: ";
    cin>>name;

    for(int x = 0 ; x < 5 ; x++)
    {
        if(name == movies[x])
        {
            count = count+x;
        }
    }

    if(count%2 == 0)
    {
        total = price - ((price*100)/10);
        cout<<"You have to Pay "<<price<<"/="<<endl;
    }

    else if(count%2 != 0)
    {
        total = price - ((price*5)/100);
        cout<<"You have to Pay "<<total<<"/="<<endl;
    }
}