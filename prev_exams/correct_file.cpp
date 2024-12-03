using namespace std;
#include <iostream>
#include <fstream>

int main(int argc, char const *argv[])
{
    if(argc!=3){
        cerr<<"Not enough arguments\n";
        return 1;
    }

    fstream fin;
    fstream fout;

    fin.open(argv[1],ios::in);
    if(fin.fail()){
        cerr<<"Input file not found\n";
        return 1;
    }
    fout.open(argv[2],ios::out);
    if(fout.fail()){
        cerr<<"Output file not found\n";
        return 1;
    }

    if(fin.is_open()&&fout.is_open()){
        bool needs_uppercase=true;
        char input;
        fin>>noskipws;
        while (fin.get(input))
        {
            if (needs_uppercase&&islower(input))
            {
                fout<<char(toupper(input));
                needs_uppercase=false;
            }
            else fout<<input;
            if(input=='?'||input=='.'||input=='!')needs_uppercase=true;
            
        }
        
    }


    cout<<"Execution terminated!\n";
    fin.close();
    fout.close();
    return 0;
}
