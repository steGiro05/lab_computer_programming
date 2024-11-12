using namespace std;
#include <iostream>
#include "stack.h"
using namespace stack_ns;
#include <math.h>

void sum(node**stack);
void diff(node**stack);
void mul(node**stack);
void div(node**stack);
void swap(node**stack);
void pwr(node **stack);
void root(node **stack);
void eql(node **stack);

int main(int argc, char const *argv[])
{
    node *stack= NULL;

    string user_input;
    do
    {
        cout<<"Command: ";
        cin>>user_input;
        if (user_input=="q"){
            cout<<"Terminating execution..";
        }

        else if (user_input=="p"){
            print(stack);
        }
        else if (user_input=="s"){
            swap(&stack);
        }
        else if (user_input=="+"){
            sum(&stack);
        }
        else if (user_input=="-"){
            diff(&stack);
        }
        else if (user_input=="*"){
            mul(&stack);
        }
        else if (user_input=="/"){
            div(&stack);
        }else if (user_input=="^"){
            pwr(&stack);
        }
        else if (user_input=="sqrt"){
            root(&stack);
        }
        else if (user_input=="eql"){
            eql(&stack);
        }
        else {
            try
            {
                double number=stod(user_input);
                push(&stack,number);
            }
            catch(const std::exception& e)
            {
                std::cerr <<"Exception: "<< e.what() << '\n';
            }
        }
        
    } while (user_input!="q"); 
    
    deallocate_list(stack);
    return 0;
}

void sum(node**stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack, n2+n1);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void diff(node**stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack, n2-n1);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void swap(node ** stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack,n1);
        push(stack,n2);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void mul(node**stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack, n2*n1);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}
void div(node**stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        if(n1==0)__throw_runtime_error("Division by 0");
        push(stack, n2/n1);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void pwr(node **stack){
    try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack,pow(n2,n1));
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void root(node **stack){
try
    {
        double n=pop(stack);
        if(n<0) __throw_runtime_error("Root of a negative number");
        push(stack,sqrt(n));
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}

void eql(node **stack){
try
    {
        double n1=pop(stack);
        double n2=pop(stack);
        push(stack,n1==n2);
     }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
}
