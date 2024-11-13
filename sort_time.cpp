#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main() {
    // Creiamo un array di 1000 numeri casuali
    std::vector<int> vec(1000);
    for (int i = 0; i < 1000; ++i) {
        vec[i] = rand() % 10000;  // Numeri casuali tra 0 e 9999
    }

    // Iniziamo il cronometro
    auto start = std::chrono::high_resolution_clock::now();

    // Ordiniamo il vettore
    std::sort(vec.begin(), vec.end());

    // Fermiamo il cronometro
    auto end = std::chrono::high_resolution_clock::now();

    // Calcoliamo la durata
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    
    std::cout << "Tempo di ordinamento: " << duration.count() << " microsecondi" << std::endl;

    return 0;
}
