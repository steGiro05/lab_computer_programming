using namespace std;
#include <iostream>
#include <cstdlib>
#include <string>

int main ()
{
    string str1 = "2024, CP1";
    string str2 = "0x8A";
    string str3 = "-100";
    string str4 = "100"; //"100"
    string strInv = "CP1 2024"; //invalid argument -> error
    
    int num1 = stoi(str1);
    int num1b = stoi(str1, NULL, 10);
    size_t idx;
    int num1c = stoi(str1, &idx, 10);
    int num2 = stoi(str2, nullptr, 16);
    int num3 = stoi(str3, nullptr, 2);
    int num4 = stoi(str4, nullptr, 2);
    try{
      int numInv = stoi(strInv);
    }
    catch(invalid_argument){
      cout << "Invalid argument raised for "<< strInv<< endl;
    }
 
    cout << str1 << "-->" << num1 << endl; //2024
    cout << str1 << "-->" << num1b << endl; //2024
    cout << str1 << "-->" << num1c << " " << idx << endl; //2024 4
    cout << str2 << "-->" << num2<< endl; //138
    cout << str3 << "-->" << num3<< endl; //-4
    cout << str4 << "-->" << num4<< endl; //4
    
  return 0;
}
