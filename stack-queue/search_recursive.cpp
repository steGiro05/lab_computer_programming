using namespace std;
#include <iostream>
#include <fstream>
#include "../LIBRARY/linked_list.h"
using namespace linked_list_ns;

int main(int argc, char const *argv[])
{
    node * list = nullptr;
    //input
    fstream myin;
    myin.open("input",ios::in);
    if(myin.fail()){
        cerr<<"Error opening the input file!"<<endl;
        deallocate_list(list);
        return 1;
    }
    if(myin.is_open()){
        string line;
        while (!myin.eof())
        {
            getline(myin,line);
            try
            {
                insert(&list,stod(line));
            }
            catch(const std::exception& e)
            {
                std::cerr<<"Exception: " << e.what() << '\n';
                return 1;
            }
            
        }
    }

    //search
    int value;
    cout<<"Value to search: ";
    cin>>value;
    if(cin.fail() || cin.peek()!='\n'){
        cout<<"Invalid input";
        deallocate_list(list);
        return 1;
    }

    if(search(list,value))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    deallocate_list(list);


    return 0;
}
