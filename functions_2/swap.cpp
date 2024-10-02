using namespace std;
#include <iostream>

void exchange_values(float *first_value,float *second_value);

int main(int argc, char const *argv[])
{
    float first_value,second_value;
    cout<<"Insert two real values: ";
    cin >> first_value >> second_value;

    exchange_values(&first_value,&second_value);

    cout<<"Exchanged values: "<<first_value<<", "<<second_value<<endl;

    return 0;
}

void exchange_values(float *first_value,float *second_value){
    float temp;
    temp=*first_value;
    *first_value=*second_value;
    *second_value=temp;
}


