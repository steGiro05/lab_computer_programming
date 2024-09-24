using namespace std;
#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    float radius;

    bool input_fail=false;
    do{
        cout<<"Radius: ";
        cin>>radius;

        input_fail=cin.fail() || cin.peek()!='\n';
        cin.clear();//clear the error flag

        if(input_fail){
            cout<<"Invalid input!\n";
            cin. ignore(numeric_limits<streamsize>::max(), '\n');//clear the buffer
        }

    }while(input_fail);
    

    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;
    /* code */
    cout << "radius: " <<radius<<", area: "<<area <<", circumference: "<< circumference << endl;
    return 0;
}
