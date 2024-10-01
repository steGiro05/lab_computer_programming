using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    int a=2;
    int b=4;
    short c=0b1000'0000'0000'0000;
    short d=0b0000'0000'0000'0010;
    short res;

    //VARIANT A
    //res=abs(a-b);

    //VARIANT B
    /*
    if(b>a){
        res=b-a;
    }
    else{
        res=a-b;
    }
    */
    //VARIANT C
    res=a-b;

    cout<<d;
    return 0;
    cout<<(!(c ^ d)|d);

    return 0;
}
