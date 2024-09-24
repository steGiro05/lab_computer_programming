using namespace std;
#include <iostream>
#include <limits>


int main(int argc, char const *argv[])
{
    float farenheit_temp;
    bool input_fail=false;


    do{
    cout<<"Farenheit temperature: ";
    cin>>farenheit_temp;

    input_fail=cin.fail() || cin.peek()!='\n';
    cin.clear();//clear the error flag

    if(input_fail){
        cout<<"Invalid input!\n";
        cin. ignore(numeric_limits<streamsize>::max(), '\n');//clear the buffer
    }

    }while(input_fail);

    float celsius_temp = (farenheit_temp - 32) / 1.8;

    cout << "Farenheit: " << farenheit_temp << ", Celsius: " << celsius_temp << endl;

    return 0;
}
