#include <string>
#include <ctime>
#ifndef BORROWER_H  
#define BORROWER_H  

class Borrower {
public:
    Borrower(std::string name, time_t borrowed_at):name{name},borrowed_at{borrowed_at}{};
    std::string to_string() const {
        return "Name: " + name + ", Borrowed at: " + ctime(&borrowed_at);
    }
    std::string get_name() const {return name;}
    time_t get_borrowed_at() const {return borrowed_at;}
private:
    std::string name;
    time_t borrowed_at;
};

// Overloading dell'operatore <<
inline std::ostream& operator<<(std::ostream& os, const Borrower& borrower) {
    os << borrower.to_string();  // Chiamata al metodo to_string() per ottenere la rappresentazione
    return os;  // Restituisci il flusso per poter concatenare altre operazioni << se necessario
}


#endif // BORROWER_H    
