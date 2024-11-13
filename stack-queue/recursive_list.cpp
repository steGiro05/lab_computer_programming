using namespace std;
#include <iostream>
#include "../LIBRARY/linked_list.h"
using namespace linked_list_ns;

int main(int argc, char const *argv[])
{
    node * list=nullptr;
    insert(&list,1);
    insert(&list,2);
    insert(&list,3);
    traverse(list);

    deallocate_list(list);
    return 0;
}
