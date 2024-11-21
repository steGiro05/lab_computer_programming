using namespace std;
#include <iostream>
#include "../LIBRARY/Book.h"
#include "../LIBRARY/List.h"

int main(int argc, char const *argv[])
{
    List<Book> book_list;
    Book bk1("title 1","author 1");
    Book bk2("title 2","author 2");

    book_list.add_element(bk1);
    book_list.add_element(bk2);

    book_list.print();

    return 0;
}
