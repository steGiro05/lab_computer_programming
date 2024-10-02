using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    int temp_1=0,temp_2=1;
    int n,res=0;

    cout<<"n: ";
    cin>>n;

    if(n<=1)
        return 1;

    for (size_t i = 0; i < n-1; i++)
    {
        res=temp_1+temp_2;
        temp_1=temp_2;
        temp_2=res;
    }
    

    cout<<"Result: "<<res<<endl;

    return 0;
}
