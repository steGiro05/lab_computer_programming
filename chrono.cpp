#include <iostream>
#include <chrono>
#include <cstdlib> // per system()

int main(int argc, char* argv[]) {
    // Controlla se il percorso dell'eseguibile è stato fornito come argomento
    if (argc < 2) {
        std::cerr << "Errore: specificare il percorso relativo dell'eseguibile come argomento." << std::endl;
        return 1;
    }

    // Ottiene il percorso dell'eseguibile dalla linea di comando
    std::string executablePath = argv[1];

    // Inizia il cronometro
    auto start = std::chrono::high_resolution_clock::now();

    // Lancia l'eseguibile esterno
    int result = system(executablePath.c_str());

    // Fine del cronometro
    auto end = std::chrono::high_resolution_clock::now();

    // Calcola la durata in millisecondi
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    // Verifica se l'eseguibile è stato eseguito con successo
    if (result == 0) {
        std::cout << "Eseguibile eseguito con successo.\n";
    } else {
        std::cerr << "Errore durante l'esecuzione dell'eseguibile.\n";
    }

    // Stampa il tempo di esecuzione
    std::cout << "Tempo di esecuzione: " << duration.count() << " millisecondi" << std::endl;

    return 0;
}
