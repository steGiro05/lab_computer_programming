using namespace std;
#include <iostream>
#include <cstdlib>
#include <iomanip>

int main () 
{
  const float euro = 1936.27;

  int value;
  float liravalue;
  
  cin >> value;
  while (!cin.eof()) {
    if (!cin.fail()) {
      liravalue = euro*value;
      cout << value << " " << fixed << setw(8) << setprecision(0) 
           << liravalue << endl;
    }
    else { // (cin.fail() but non cin.eof(
      char s [100];
      cin.clear(); //restore the normal state
      cin >> s;
      cout << "s is: " << s << endl;
    }

    cin >> value;
  }
  return 0;
}
