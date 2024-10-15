using namespace std;
#include <iostream>
#include <cstdlib>

int main ()
{
  int n;
  char buffer[256];
  cout << "Enter a number: " << endl;
  cin >> buffer;
  n = atoi (buffer);
  cout << "Value=" << n << " the double is:" << 2*n;  
  return 0;
}
