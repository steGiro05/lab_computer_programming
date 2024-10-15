#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main() {
  fstream myin;
  string line;

  myin.open("input.txt", ios::in);

  if ( myin.is_open() ) { 
    myin >> line; 
    cout << line; 
  }

  myin.close();

  myin.open("input.txt", ios::in);

char c;

int bufSize=5;
char buf[bufSize];
myin.get(c);
cout  << "(c)" << c << endl; //read one char  //l
myin.get(buf, bufSize);   //read up to nr.5 chars
cout  << "(buf bufSize chars)" << buf << endl; //read up to 3 char  //ine
char c1 = myin.get(); //copy one char in c  
cout  << "(c1)" << c1 << endl; //read one char  //1

getline(myin, line); // read one line from the file and copy in a string line  
cout  << "(line1)" << line << endl; // \cr\na (remaining part of the first line)

getline(myin, line, '.'); // read one line, or till a delimiter character, from the file and copy in a string line
cout  << "(line2)" << line << endl; //line 1 b .
    
  myin.close();
}

