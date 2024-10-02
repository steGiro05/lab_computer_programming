using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    int bin_number, res=0;
    cout<<"Binary number: ";
    cin >> bin_number;

    int count = 0;
    while (bin_number!=0){
        res+=(bin_number%10)*pow(2,count);
        bin_number/=10;
        count++;
    }    

    cout<<"Result: "<<res<<endl;
    return 0;
}
