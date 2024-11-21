using namespace std;
#include <iostream>
#include "../LIBRARY/circular_list.h"
using namespace circular_list_ns;

int main(int argc, char const *argv[])
{
    node * circular_list=nullptr;
    insert(&circular_list,1);
    insert(&circular_list,2);
    insert(&circular_list,3);
    remove_neighbour(&circular_list);
    print(circular_list);

 /*    node * iterator=circular_list;
    while (length(circular_list)!=1)
    {
        remove_neighbour(&iterator);
        iterator=iterator->next;
    }
 
    cout<<"Winner: "<<iterator->data;
    */

    return 0;
}