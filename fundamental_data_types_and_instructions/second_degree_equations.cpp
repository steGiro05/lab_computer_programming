using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    float a=1,b=3,c=2;
    float delta;
    float x_1,x_2;

    if(a==0&&b==0&&c==0){
        cout<<"Equation not complete!"<<endl;
        return 1;
    }

    delta=pow(b,2)-4*a*c;
 

    if(delta<0){
        cout<<"No solutions!"<<endl;
        return 1;
    }

    x_1=(-b+sqrt(delta))/(2.0f*a);
    if (delta==0)
    {
        cout<<"One solution: "<<x_1<<endl;
        return 0;
    }
    x_2=(-b-sqrt(delta))/(2.0f*a);
    cout<<"Two solutions: "<<x_1<<" "<<x_2<<endl;

    
    return 0;
}
