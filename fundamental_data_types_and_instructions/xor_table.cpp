using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    bool a=true,b=false;
    cout<<"XOR TABLE\n";
    cout<<"input: "<<(int)b<<" "<<(int)b<<" output: "<<int((b | b)&(!(b & b)))<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)b<<" output: "<<int((a | b)&(!(a & b)))<<endl;
    cout<<"input: "<<(int)b<<" "<<(int)a<<" output: "<<int((b | a)&(!(b & a)))<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)a<<" output: "<<int((a | a)&(!(a & a)))<<endl;

    return 0;
}
