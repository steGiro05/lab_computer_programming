using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    int dividend=0;
    int divisor=0;

    //check input
    if (divisor==0)
    {
        cout<<"cannot divide by 0";
        return 1;
    }
    

    int quotient=dividend/divisor;
    int reminder=dividend%divisor;

    cout << "quotient: "<<quotient<<" reminder: "<<reminder<<endl;

    return 0;
}
