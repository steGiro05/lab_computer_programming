using namespace std;
#include <iostream>

#define MAX_TURNS 12

void initialize_output(char arr[],int size);
void initialize_colors(int arr[], int size);
int read_array(int arr[],int size);
bool check_guess(int user_guess[],int correct_order[],char res[],int size);
void initialize_output(char arr[],int size);
void print_char_array(char array[], int dim);
void print_array(int array[], int dim);
void remove_duplicates(int array[], int &size);


int main(int argc, char const *argv[])
{
    int array_to_guess[4],user_guess[4];
    char output[4];

    initialize_output(output,sizeof(output)/sizeof(char));
    initialize_colors(array_to_guess,sizeof(array_to_guess)/sizeof(int));

    cout<<"Array to guess: ";
    //print_array(array_to_guess,sizeof(array_to_guess)/sizeof(int));
    for (size_t i = 0; i < MAX_TURNS; i++)
    {
        cout<<"TURN N. "<<i+1<<endl;
        if(read_array(user_guess,sizeof(user_guess)/sizeof(int))!=0){
            cerr<<"input error!";
            return -1;
        }

        if (check_guess(user_guess,array_to_guess,output,sizeof(user_guess)/sizeof(int))){
            cout<<"WIN!"<<endl;
            return 0;
        };

        cout<<"Output: ";
        print_char_array(output,sizeof(output)/sizeof(char));
        initialize_output(output,sizeof(output)/sizeof(char));

    }

    cout<<"The correct guess was: ";
    print_array(array_to_guess,sizeof(array_to_guess)/sizeof(int));
    return 0;
}





void initialize_output(char arr[],int size){
    for (size_t i = 0; i < size; i++)
    {
        arr[i]='.';
    }
    
}

void initialize_colors(int arr[],int size){
    for (size_t i = 0; i < size; i++)
    {
        arr[i]=rand()%6+1;
        /* code */
    }
    
}

int read_array(int arr[],int dim){
    
    int input;
    for (size_t i = 0; i < dim; i++)
    {
        cout<<i+1<<" color: ";
        cin>>input;
        if(input<1 || input > 6) return -1;
        arr[i]=input;
    }
    return 0;
    
}
bool check_guess(int user_guess[],int correct_order[],char res[],int size){
    int j=0;
    for (size_t i = 0; i < size; i++)
    {
        if(user_guess[i]==correct_order[i]){
            res[j]='R';
            j++;
        }
    }

    int sizeof_guess=sizeof(user_guess)/sizeof(int);
    remove_duplicates(user_guess,sizeof_guess);


    if (j==4)return true;
    return false;
    
}

void print_char_array(char array[],int dim){
    for (size_t i = 0; i < dim; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void print_array(int array[],int dim){
    for (size_t i = 0; i < dim; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void remove_duplicates(int array[], int &size) {
    for (int i = 0; i < size; i++) {
        // Controlliamo se l'elemento corrente è un duplicato
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                // Sposta gli elementi a sinistra per rimuovere il duplicato
                for (int k = j; k < size - 1; k++) {
                    array[k] = array[k + 1];
                }
                size--; // Decrementa la dimensione
                j--; // Resta sulla stessa posizione per controllare il nuovo elemento
            }
        }
    }
}