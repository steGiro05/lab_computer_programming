// C++ program to illustrate the
// strtol() function when decimal base
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int b=10;
  long int n;
  char buffer[256];
  char* end;
  cout << "Enter a number: " << endl;
  cin >> buffer;  //test1:43, test2:43io
  n = strtol (buffer, &end, b);
  cout << "Value=" << n << " the double is:" << 2*n << endl;  //test1:43,86 test2:test1:43,86
  cout << "End String = " << end << endl;  //test1 (nothing)  test2:io

	return 0;
}
