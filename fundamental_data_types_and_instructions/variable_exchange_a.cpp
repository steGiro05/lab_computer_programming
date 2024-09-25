using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    char a='a',b='b';

    cout<<"Original values: "<<a<<" "<<b<<endl;

    char temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"Swapped values: "<<a<<" "<<b<<endl;

    return 0;
}
