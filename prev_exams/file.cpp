using namespace std;
#include <iostream>
#include <fstream>

int read_lines(string input_file, string lines[] , int &y);

int main(int argc, char const *argv[])
{
    string lines [100];
    int y=0;
    if(read_lines("input",lines, y))return 1;

    

    return 0;
}

int read_lines(string input_file, string lines[] , int &y){
    fstream myin;
    myin.open(input_file, ios::in);
    if(!myin.is_open()){
        cerr<<"Error opening the input file!";
        return 1;
    }

    string l;
    while (getline(myin, l))
    {
        lines[y]=l;
        y++;
    }
    
    return 0;
}

