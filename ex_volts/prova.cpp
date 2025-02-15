#include <iostream>
using namespace std;

struct date { // simple structure
int day, month, year; //fields
};

struct person { // nested structure
    char name[25], surname[25];
    char born_city[25];
    date date_of_birth;
};


struct student { // nested structure
person p;
char studentID[10];
int enrollment_year;
};

int main(int argc, char const *argv[])
{
    person p={"luca",{},"india",{10,10,10}};
    person * pointer = &p;
    cout<<pointer->name;
    cout << p.date_of_birth.day;
    return 0;
}
