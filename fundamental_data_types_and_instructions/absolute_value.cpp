using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    int a=2;
    int b=4;
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
    res=(a>b)*res+(a<b)*(-res);
    cout<<res<<endl;
    return 0;

}
