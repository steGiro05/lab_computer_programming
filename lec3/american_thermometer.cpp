using namespace std;
#include <iostream>


int main(int argc, char const *argv[])
{
    float farenheit_temp= 142.3f;
    float celsius_temp = (farenheit_temp - 32) / 1.8;

    cout << "Farenheit: " << farenheit_temp << ", Celsius: " << celsius_temp << endl;

    return 0;
}
