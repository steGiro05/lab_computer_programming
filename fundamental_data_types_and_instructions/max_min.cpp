using namespace std;
#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    float a=1.1f,b=1.7f,max_value,min_value;


    //WITH CMATH
    /*
    max_value=max(a,b);
    min_value=min(a,b);
    */

    //WITH IF ELSE STMT
    /*
    if(a>b){
        max_value=a;
        min_value=b;
    }
    else{
        max_value=b;
        min_value=a;
    }
    */

    //WITHOUT IF ELSE STMT
    float diff=a-b;
    bool a_greater=(diff>=0);
    max_value=a*(a_greater)+b*(!a_greater);
    min_value=a*(!a_greater)+b*(a_greater);


    cout<<"Max: "<<max_value<<" Min: "<<min_value<<endl;
    return 0;
}
