using namespace std;
#include <iostream>

int division(int,int,int&);
void normalize_time(int&,int&,int&);

int main(int argc, char const *argv[])
{
    int a,b,c;
    cout<<"Insert the three integer numbers (seconds/minutes/hours): ";
    cin >> a >> b>>c;

    normalize_time(a,b,c);

    cout<<"Normalized hour  ==>  sec: "<<a<<", min: "<<b<<", hours: "<<c<<endl;

    return 0;
}

int division(int a,int b,int& reminder){
    int count=0;
    while (a>=b){
        a-=b;
        count++;
    }
    reminder=a;
    return count;
}

void normalize_time(int& seconds,int& minutes,int& hours){
    minutes+=division(seconds,60,seconds);
    hours+=division(minutes,60,minutes);
}
