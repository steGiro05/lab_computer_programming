using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    bool a=true;
    bool b=false;

    cout<<"P->Q TABLE\n";
    cout<<"input: "<<a<<" "<<a<<" output: "<<(!(a ^ a)|a)<<endl;
    cout<<"input: "<<a<<" "<<b<<" output: "<<(!(a ^ b)|b)<<endl;
    cout<<"input: "<<b<<" "<<a<<" output: "<<(!(b ^ a)|a)<<endl;
    cout<<"input: "<<b<<" "<<b<<" output: "<<(!(b ^ b)|b)<<endl;
    return 0;
}
