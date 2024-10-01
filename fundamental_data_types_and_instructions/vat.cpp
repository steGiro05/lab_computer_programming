using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    cout.precision(5);
    float price=2.12;
    float vat=1.23;

    float result = price+(price*vat)/100;

    cout<<"Result: "<<result<<endl;
    return 0;
}
