using namespace std;
#include <iostream>

long factorial(long);
int sum_of_N_int(int);
int division_as_sub(int,int);

int main(int argc, char const *argv[])
{
    long n;
    cout<<"Insert a number: ";
    cin>>n;

    //cout<<"Result: "<<factorial(n);
    cout<<"Result: "<<sum_of_N_int(n);


    
    return 0;
}

long factorial(long n){
    if(n==1) return 1;
    n*=factorial(n-1);
    return n;
}

int sum_of_N_int(int n){
    if(n==1) return 1;
    n+=sum_of_N_int(n-1);
    return n;
}

int division_as_sub(int dividend,int divisor){

}
