using namespace std;
#include <iostream>
#include <fstream>
#include "../LIBRARY/stack.h"
using namespace stack_ns;


int main(int argc, char const *argv[])
{
    fstream myin,myout;
    node * stack=nullptr;

    try
    {
        myin.open("input",ios::in);
        myout.open("output",ios::out);

        //check errors
        if(myin.fail()){
            __throw_runtime_error("Cannot open input file");
        }
        if(myout.fail()){
            __throw_runtime_error("Cannot open output file");
        }

        //reading
        if(myin.is_open()){
            string text;
            while (!(myin.eof()))
            {
                getline(myin,text);
                int num=stoi(text);
                push(&stack,num);
            }
        }

        if(myout.is_open()){
            while (stack!=nullptr)
            {
                myout<<pop(&stack)<<endl;
            }
            
        }        
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Runtime error: "<< e.what() << '\n';
    }

   

    /* code */
    push(&stack,1);
    deallocate_list(stack);
    print(stack);
    return 0;
}

