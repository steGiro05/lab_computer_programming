using namespace std;
#include <iostream>

int roll_dice();
void sort(int[],int);
void swap_elements(int[],int,int);
void compare(int[],int[],int);

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int atk[3],def[3];

    for (size_t i = 0; i < 3; i++)
    {
        atk[i]=roll_dice();
        def[i]=roll_dice();
    }
    
    sort(atk,3);
    sort(def,3);

    compare(atk,def,3);

    return 0;
}

int roll_dice(){
    return rand()%6+1;
}


void sort(int arr[], int n) {
    // Ciclo esterno per passare attraverso l'intero array
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno per confrontare gli elementi
        for (int j = 0; j < n - i - 1; j++) {
            // Scambiare se l'elemento corrente è maggiore del successivo
            if (arr[j] > arr[j + 1]) {
                swap_elements(arr,j,j+1);
            }
        }
    }
}

void swap_elements(int arr[],int i,int j){
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}

void compare(int atk[],int def[],int dim){

    int atk_clash=0;
    for (size_t i = 0; i < dim; i++)
    {
        if(atk[i]>def[i]) atk_clash++;
    }

    cout<<"The attacker won "<<atk_clash<<" clashes, the defender won "<<dim-atk_clash<<" clashes"<<endl;
    
}




