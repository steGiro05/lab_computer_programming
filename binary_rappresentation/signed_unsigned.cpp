using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    unsigned short larger_unsigned=0b1111'1111'1111'1111; //65535
    unsigned short smaller_unsigned=0;

    cout<<"smaller unsigned: "<<smaller_unsigned<<endl;
    cout<<"larger unsigned: "<<larger_unsigned<<endl;

    short larger=0b0111'1111'1111'1111;//32767
    short smaller=0b1000'0000'0000'0000;//-32768

    cout<<"smaller with sign: "<<smaller<<endl;
    cout<<"larger with sign: "<<larger<<endl;
    return 0;
}
