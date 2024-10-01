using namespace std;
#include <iostream>
#include <cstdlib>

int roll_dices();

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n_ones=roll_dices();
    int guess;

    cout<<"How many dices turned out to be 1? ";
    cin>>guess;

    if(guess==n_ones)
        cout<<"Correct!"<<endl;
    else
        cout<<"Wrong, the number of ones was: "<<n_ones<<endl;


    return 0;
}

int roll_dices(){
    int count=0;
    for (size_t i = 0; i < 10; i++)
    {
        if(rand() % 6 + 1==1)
            count++;
    }
    return count;
}
