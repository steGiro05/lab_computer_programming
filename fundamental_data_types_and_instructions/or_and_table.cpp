using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    bool a=true,b=false;
    cout<<"AND TABLE\n";
    cout<<"input: "<<(int)b<<" "<<(int)b<<" output: "<<int(b & b)<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)b<<" output: "<<int(a & b)<<endl;
    cout<<"input: "<<(int)b<<" "<<(int)a<<" output: "<<int(b & a)<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)a<<" output: "<<int(a & a)<<endl;

    cout<<"OR TABLE\n";
    cout<<"input: "<<(int)b<<" "<<(int)b<<" output: "<<int(b | b)<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)b<<" output: "<<int(a | b)<<endl;
    cout<<"input: "<<(int)b<<" "<<(int)a<<" output: "<<int(b | a)<<endl;
    cout<<"input: "<<(int)a<<" "<<(int)a<<" output: "<<int(a | a)<<endl;
    return 0;
}
