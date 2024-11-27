#include <string>
#include <ctime>
#include "Borrower.h"
#include "Book.h"
#ifndef Borrowing_H  
#define Borrowing_H  

class Borrowing {
public:
    Borrowing(Book * book, Borrower * borrower);
    std::string to_string() const {
        return "Book: "+book->to_string()+", Borrower: "+borrower->to_string();
    }
    Book get_book() const {return *book;}
    Borrower get_borrower() const {return *borrower;}
private:
    Book * book;
    Borrower * borrower;
};

// Overloading dell'operatore <<
inline std::ostream& operator<<(std::ostream& os, const Borrowing& borrowing) {
    os << borrowing.to_string();  // Chiamata al metodo to_string() per ottenere la rappresentazione
    return os;  // Restituisci il flusso per poter concatenare altre operazioni << se necessario
}


#endif // BORROWING_H    
