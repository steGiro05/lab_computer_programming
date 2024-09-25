using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    char a='a',b='b';

    cout<<"Original values: "<<a<<" "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"Swapped values: "<<a<<" "<<b<<endl;

    return 0;
}
