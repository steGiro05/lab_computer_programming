using namespace std;
#include <iostream>

int max_val(int , int , int , int , int );
void read_values(int&,int&,int&,int&,int&);

int main(int argc, char const *argv[])
{
    int a,b=-2147483647 - 1,c=-2147483647 - 1,d=-2147483647 - 1,e=-2147483647 - 1;

    //VARIANT ONE
    read_values(a,b,c,d,e);

    cout<<"Max: "<<max_val(a,b,c,d,e)<<endl;

    return 0;
}

int max_val(int a, int b, int c, int d, int e) {
    return max(max(max(max(a,b),c),d),e);
}

void read_values(int& a,int& b,int& c,int& d,int& e){
    cout<<"Insert a set of max 5 numbers: ";
    cin>>a;
    if(cin.peek()=='\n')return;
    cin>>b;
    if(cin.peek()=='\n')return;
    cin>>c;
    if(cin.peek()=='\n')return;
    cin>>d;
    if(cin.peek()=='\n')return;
    cin>>e;
    if(cin.peek()=='\n')return;
}
