using namespace std;
#include <iostream>

struct Date{
    int day;
    int month;
    int year;
};

int main(int argc, char const *argv[])
{
    Date d = {1};
    cout<<d.day;
    Date * p = new Date[2];
    cout << p->day;
    return 0;
}
