using namespace std;
#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
    float radius = 4.5f;

    //remember to add .0 to constants or else they will be interpretated as integer and so the division
    float sphere_volume = (4.0f/3.0f)* M_PI * pow(radius, 3);

    cout << "radius: " <<radius<<", volume of the sphere: "<<sphere_volume  << endl;
    return 0;
}
