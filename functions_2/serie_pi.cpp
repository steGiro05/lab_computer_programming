using namespace std;
#include <iostream>
#include <cmath>

long double n_serie(int approximation);
long double compute_pi(int approximation);

int main(int argc, char const *argv[])
{
    int approximation;

    cout<<"COMPUTE PI"<<endl;
    cout<<"Choose the approximation (integer value): ";
    cin>>approximation;
    cout<<"Computed value: "<<compute_pi(approximation)<<endl;
 
}

long double compute_pi(int approximation){
    return sqrt(6*n_serie(approximation));
}

long double n_serie(int approximation){
    long double res=0;
    for (size_t i = 1; i <= approximation; i++)
    {
        res+=1/pow(i,2);
    }

    return res;
    
}
