using namespace std;
#include <iostream>
#include "../LIBRARY/stack.h"
using namespace stack_ns;
#define DIM 5

int main(int argc, char const *argv[])
{
    char input[DIM+1]={};
    cin.getline(input,sizeof(input));

    if(cin.fail()){
        cout<<"to many characters";
        return 1;
    }


    node* stack = nullptr;
    for (size_t i = 0; i < DIM; i++)
    {
        if (input[i]=='(') push(&stack, 1);
        if (input[i]==')') pop(&stack);
    
    }
    
    if (stack==nullptr)cout<<"Expression is correct";
    else cout<<"Expression is incorrect";
    
    deallocate_list(stack);
    return 0;
}

