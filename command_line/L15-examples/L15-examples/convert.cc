using namespace std;
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main () 
{
  const float euro = 1936.27;

  int value;
  float liravalue;
  
  // This program requires a separator after the last element read 
  // otherwise better use  !cin.fail ()
  // Note: "!cin.eof()" hass to be used after at least one operation of reading
  cin >> value;
  while (!cin.eof()) {
    liravalue = euro*value;
    cout << value << " "  << fixed << setw(8) << setprecision(0) 
         << liravalue << endl;
    cin >> value;
  }
  return 0;
}
