using namespace std;
#include <iostream>
#include <fstream>

struct pixel
{
    int red;
    int green;
    int blue;
};


#define ROWS 600
#define COLUMNS 800
pixel IMAGE[ROWS][COLUMNS];

void read_image(string filename);
void output_image(string filename);
void copy_image(string input_file, string outpt_file);
void rotate();
void gray();

int main(int argc, char const *argv[])
{
    read_image(argv[1]);
    gray();    
    output_image(argv[2]);
    
    return 0;
}
void copy_image(string input_file, string output_file) {
    fstream img_input, img_output;

    // Apri il file di input in modalità lettura
    img_input.open(input_file, ios::in);
    if (img_input.fail()) {
        cerr << "Errore: impossibile aprire il file di input" << endl;
        return;
    }

    // Apri il file di output in modalità scrittura
    img_output.open(output_file, ios::out);
    if (img_output.fail()) {
        cerr << "Errore: impossibile aprire il file di output" << endl;
        return;
    }

    // Copia il contenuto del file di input nel file di output
    string line;
    while (getline(img_input, line)) {
        img_output << line << endl;
    }

    // Chiudi entrambi i file
    img_input.close();
    img_output.close();
}

void read_image(string filename){
    string line;
    fstream img_input;
    img_input.open(filename,ios::in);
    if(img_input.fail()){
        cerr<<"Input file doesn't exist";
        return;
    }
    if (img_input.is_open())
    {
        //skip the first three lines
        getline(img_input,line);
        getline(img_input,line);
        getline(img_input,line);

        //start reading rgb values
        for (size_t j = 0; j < ROWS; j++)
        {
            for (size_t i = 0; i < COLUMNS; i++)
            {
                img_input>> IMAGE[j][i].red;
                img_input>> IMAGE[j][i].green;
                img_input>> IMAGE[j][i].blue;
            }
        } 
    }
}

void output_image(string filename){
    fstream img_output;
    img_output.open(filename,ios::out);

    if(img_output.fail()){
        cerr<<"Output file doesn't exist";
        return;
    }
    if (img_output.is_open())
    {
        img_output<<"P3\n";
        img_output<<COLUMNS<<" "<<ROWS<<endl;
        img_output<<"255\n";

        for (size_t j = 0; j < ROWS; j++) {
            for (size_t i = 0; i < COLUMNS; i++) {
                img_output << IMAGE[j][i].red<<" "<<IMAGE[j][i].green<<" "<<IMAGE[j][i].blue<<" ";
            }
        img_output << endl; // Vai a capo dopo ogni riga
        }

    }
}

void rotate(){
    for (size_t j = 0; j < ROWS; j++) {
            for (size_t i = 0; i < COLUMNS; i++) {
                int red = IMAGE[j][i].red;

                IMAGE[j][i].red=IMAGE[j][i].green;
                IMAGE[j][i].green=IMAGE[j][i].blue;
                IMAGE[j][i].blue=red;
            }
    }
}

void gray(){
    for (size_t j = 0; j < ROWS; j++) {
            for (size_t i = 0; i < COLUMNS; i++) {
                int gray = IMAGE[j][i].red*0.2989+0.587*IMAGE[j][i].green+0.114*IMAGE[j][i].blue;
                if (gray>=255) gray=254;
                
                IMAGE[j][i].red=gray;
                IMAGE[j][i].green=gray;
                IMAGE[j][i].blue=gray;
            }
    }
}