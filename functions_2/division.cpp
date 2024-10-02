using namespace std;
#include <iostream>

int division(int,int,int&);

int main(int argc, char const *argv[])
{
    int a,b,reminder;
    cout<<"Insert the two integer numbers for the division (first/second): ";
    cin >> a >> b;
    if(b==0){
        cout<<"b cannot be 0"<<endl;        
        return 1;
    }

    cout<<"Quotient: "<<division(a,b,reminder)<<", Reminder: "<<reminder<<endl;
    
    return 0;
}

int division(int a,int b,int& reminder){
    int count=0;
    while (a>=b){
        a-=b;
        count++;
    }
    reminder=a;
    return count;
}
