using namespace std;
#include <iostream>
#include "../LIBRARY/queue.h"
#include "../LIBRARY/stack.h"

#define DIM 100

int main(int argc, char const *argv[])
{
    char buffer[DIM];
    node *queue=nullptr;
    node *stack=nullptr;
    bool palindrome=true;


    cout<<"word: ";
    cin>>buffer;

    try
    {
        if(cin.fail()) __throw_runtime_error("Buffer overflow");

        int i=0;
        while (buffer[i]!='\0')
        {
            stack_ns::push(&stack,buffer[i]);
            queue_ns::enqueue(&queue,buffer[i]);
            i++;
        }
        
        while (queue != nullptr && palindrome)
        {
            if(queue_ns::dequeue(&queue)!=stack_ns::pop(&stack)){
                palindrome = false;
            }
        }

    }
    catch(const std::exception& e)
    {
        std::cerr<<"Exception"<< e.what() << '\n';
    }
    
    

    if (palindrome)cout<<"Palindrome word!";
    else cout<<"Not a palindrome word!";
    

    return 0;
}
