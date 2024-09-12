using namespace std;
#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    float radius = 4.5f;
    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;
    /* code */
    cout << "radius: " <<radius<<", area: "<<area <<", circumference: "<< circumference << endl;
    return 0;
}
