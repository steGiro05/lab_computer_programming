using namespace std;
#include <iostream>
#include <fstream>
#include "../LIBRARY/linked_list.h"
using namespace linked_list_ns;

int main(int argc, char const *argv[])
{
    node * list = nullptr;
    node * ordered_list= nullptr;
    fstream myin;

    try
    {
        myin.open("input",ios::in);
        if(myin.fail()){
            __throw_runtime_error("Error opening the input file");
        }
        if(myin.is_open()){
            string line;
            while (!myin.eof())
            {
                getline(myin,line);
                insert(&list,stod(line));
            }
        }

        //order
        ordered_list=order_list(list);
        traverse(ordered_list);
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }

    

    deallocate_list(ordered_list);
    deallocate_list(list);

    return 0;
}
