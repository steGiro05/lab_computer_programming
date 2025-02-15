using namespace std;
#include <iostream>

struct Accessorio{
    char nome[10];
    char id[4];
    char desc[100];
};

struct Elettrodomestico{
    char marca[10];
    char modello[10];
    float larghezza;
    float altezza;
    float profondita;
    float costo;
    Accessorio * accessori[100]={nullptr};
};

int add(Accessorio a, Elettrodomestico * e){
    return 0;
}

int main(int argc, char const *argv[])
{
    Elettrodomestico e[10];
    e[0].altezza=10;
    cout << e[0].altezza;
    
    return 0;
}
