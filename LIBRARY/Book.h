#include <string>
#ifndef BOOK_H  
#define BOOK_H  

class Book {
public:
    Book(std::string title,std::string author);
    std::string to_string() const {return "Title: "+title+", Author: "+author;}
    std::string get_title() const {return title;}
    std::string get_author() const {return author;}
private:
    std::string title;
    std::string author;
};

// Overloading dell'operatore <<
inline std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << book.to_string();  // Chiamata al metodo to_string() per ottenere la rappresentazione
    return os;  // Restituisci il flusso per poter concatenare altre operazioni << se necessario
}


#endif // BOOK_H    
