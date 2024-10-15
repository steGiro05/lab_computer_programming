#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream myout;

  myout.open("output.txt", ios::out);

  myout << "String 1";
  cout << "String2 meant to output";

  string hello="Hello";
  myout << hello;  //write the string to the file

  char c = 'A';
  myout.put(c); //write the char to the file

  char myStr[] = "Hello World!";
  myout.write(myStr, 5); //write up to 5 chars to the file
        
  myout.close();
}

