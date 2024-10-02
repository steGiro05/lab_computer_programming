using namespace std;
#include <iostream>
#include <cstdlib>

void roll_dices(int &n_ones);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int n_ones=0;
    roll_dices(n_ones);
    int guess;

    cout<<"How many dices turned out to be 1? ";
    cin>>guess;

    if(guess==n_ones)
        cout<<"Correct!"<<endl;
    else
        cout<<"Wrong, the number of ones was: "<<n_ones<<endl;


    return 0;
}

void roll_dices(int &n_ones){
    for (size_t i = 0; i < 10; i++)
    {
        if(rand() % 6 + 1==1)
            n_ones++;
    }
}
