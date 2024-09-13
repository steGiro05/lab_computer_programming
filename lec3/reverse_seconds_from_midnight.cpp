using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    int seconds_from_midnight = 0;

    //checcking input
    if (seconds_from_midnight <0 || seconds_from_midnight>=86400)
    {
        cout<<"Invalid input"<<endl;
        return 1;
    }
    
    int hours=seconds_from_midnight/3600;
    int minutes=(seconds_from_midnight%3600)/60;
    int seconds =(seconds_from_midnight%3600)%60;

    cout<<"seconds from midnight: "<<seconds_from_midnight<<"=>"<<hours<<"."<<minutes<<"."<<seconds<<endl;

    return 0;
}
