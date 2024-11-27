using namespace std;
#include <iostream>
#include <fstream>
#include "../LIBRARY/Int_tree.h"


int main(int argc, char const *argv[])
{
    Int_tree tree;
    fstream fin;
    fin.open("input",ios::in);
    if (fin.fail())
    {
        cerr<<"Error opening the input file";
        return 1;
    }

    if(fin.is_open()){
        string s;
        while (!fin.eof())
        {
            getline(fin,s);
            try
            {
                tree.insert(stoi(s));
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what()<<": invalid input" << '\n';
                return 1;
            }
            
        }
        
    }

    cout<<"Binary tree:\n";
    cout<<tree;
    
    return 0;
}
