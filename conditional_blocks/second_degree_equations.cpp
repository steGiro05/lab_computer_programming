using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    float delta=0,a,b,c,x_1,x_2;

    cout<<"Values of a,b and c: ";
    cin>>a>>b>>c;

    delta=pow(b,2)-4*a*c;
    
    if(delta<0)
        cout<<"no solutions";
    else if (delta==0)
    {
        x_1=-b/2*a;
        cout<<"only one solution: "<<x_1<<endl;
    }else{
        x_1=(-b+sqrt(delta))/2*a;
        x_2=(-b-sqrt(delta))/2*a;
        cout<<"solutions: "<<x_1<<", "<<x_2<<endl;
    }

    return 0;
}
