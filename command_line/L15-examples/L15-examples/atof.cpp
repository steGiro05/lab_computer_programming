using namespace std;
#include <iostream>
#include <cstdlib>

int main ()
{
  double n;
  char buffer[256];
  cout << "Enter a number: " << endl;
  cin >> buffer;
  n = atof(buffer);
  cout << "Value=" << n << " the double is:" << 2.0*n;  
  return 0;
}
