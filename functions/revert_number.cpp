using namespace std;
#include <iostream>

void print_reversed(int number);

int main(int argc, char const *argv[])
{
    int number;
    cout<<("Insert an integer number: ");
    cin>>number;

    print_reversed(number);

    /* code */
    return 0;
}

void print_reversed(int number){
    /*cout<<"Reversed number: ";
    do
    {
        int quotient=number/10;
        int reminder=number%10;
        cout<<reminder;
        number=quotient;
    }while (number!=0);
    cout<<endl;*/
    
    int reversedNumber=0;
    while(number!=0){
        int reminder=number%10;
        number=number/10;

        reversedNumber*=10;
        reversedNumber+=reminder;
    }
    cout <<reversedNumber<<endl;
    
}