using namespace std;
#include <iostream>
#include <sstream>
#include "../LIBRARY/stack.h"
#include "../LIBRARY/queue.h"

int main(int argc, char const *argv[])
{
    node * stack=nullptr;
    node * queue=nullptr;

    string line;
    cout<<"Insert number separated by a space: ";
    getline(cin,line);

    try
    {
        /* code */
        istringstream stream(line);
        if (stream.fail())
        {
            __throw_runtime_error("Error opening the stream");
        }
        
        while (!stream.eof())
        {
            string number;
            stream>>number;
            stack_ns::push(&stack,stod(number));
        }
        cout<<"initial stack: \n";
        stack_ns::print(stack);

        while (stack!=nullptr)
        {
            queue_ns::enqueue(&queue, stack_ns::pop(&stack));
        }

        while (queue!=nullptr)
        {
            stack_ns::push(&stack, queue_ns::dequeue(&queue));
        }
        
        cout<<"Reversed stack: \n";
        stack_ns::print(stack);    
    }
    catch(const std::exception& e)
    {
        std::cerr <<"Exception: "<< e.what() << '\n';
    }
    
    


    stack_ns::deallocate_list(stack);
    queue_ns::deallocate_list(queue);
    return 0;
}
