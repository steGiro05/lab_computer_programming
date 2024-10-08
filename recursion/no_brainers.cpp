using namespace std;
#include <iostream>

long factorial(long n) ;
int sum_of_N_int(int n);
int division_as_sub(int divident,int divisor);
int sum_two_numbers(int x, int y);

int main(int argc, char const *argv[])
{
    /*
    long n;
    cout<<"Insert a number: ";
    cin>>n;

    //cout<<"Result: "<<factorial(n);
    cout<<"Result: "<<sum_of_N_int(n);


    int divisor,divident;
    cout<<"Enter the divident and the divisor: ";
    cin>> divident >> divisor;
    cout<<"Result: "<<division_as_sub(divident,divisor)<<endl;
    */
    int n1,n2;
    cout<<"Enter the two numbers to add: ";
    cin>> n1 >> n2;
    cout<<"Result: "<<sum_two_numbers(n1,n2)<<endl;
    
    return 0;
}

long factorial(long n){
    if(n==0) return 1;
    n*=factorial(n-1);
    return n;
}

int sum_of_N_int(int n){
    if(n==1) return 1;
    n+=sum_of_N_int(n-1);
    return n;
}

int division_as_sub(int dividend,int divisor){
    if(dividend < divisor) return 0;
    return division_as_sub(dividend-divisor,divisor)+1;
}

int sum_two_numbers(int x, int y){
    if (y>0) return sum_two_numbers(x,y-1)+1;
    return x;
}
