using namespace std;
#include <iostream>
#include <ctime>
#include "../LIBRARY/Book.h"
#include "../LIBRARY/Borrower.h"
#include "../LIBRARY/Borrowing.h"
#include "../LIBRARY/List.h"

void add_book_stdin(List<Book> * list);

int main(int argc, char const *argv[])
{
    List<Borrower> borrower_list;
    List<Borrowing> borrowing_list;
    List<Book> book_list;

    cout<<"LIBRARY APP\n";
    int input;
    do
    {
        cout<<"1)Add a book\n2)Print all books\n3)Print all borrowers\n10)Quit\n";
        cin>>input;
        if(cin.fail() || cin.peek()!='\n'){
            cout<<"Bad input\n";
            cin.clear();
        }
        else{
            switch (input)
            {
            case 1:
                add_book_stdin(&book_list);
                break;
            case 2:
                book_list.print();
                break;
            case 3:
                borrower_list.print();
                break;
            default:
                if(input!=10){
                    cout<<"Command: "<<input<<" doesn't exist\n";
                }
                break;
            }
        }
    } while (input!=10);
    
    cout<<"Terminating execution..\n";

    return 0;
}

void add_book_stdin(List<Book> * list){
    string title,author;
    cout<<"Title: ";
    cin>>title;
    cout<<"Author: ";
    cin>>author;
    list->add_element(Book(title, author));
}
