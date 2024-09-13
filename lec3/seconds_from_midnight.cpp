using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    int hours=0;
    int minutes=59;
    int seconds=59;

    //check for input errors
    if(hours<0 || hours>23 || minutes<0 || minutes>59 || seconds<0 || seconds>59){
        cout<<"Invalid input"<<endl;
        return 1;
    }

    int seconds_from_midnight=3600*hours+60*minutes+seconds;
    cout << hours << "."<<minutes<<"."<<seconds<<"=>"<<seconds_from_midnight;

    /* code */
    return 0;
}
