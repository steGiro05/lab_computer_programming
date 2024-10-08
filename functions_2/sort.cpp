using namespace std;
#include <iostream>

void sort(int&,int&,int&);
void swap(int *first_value,int *second_value);

void bubble_sort(int[],int);
void read_array(int[],int);
void print_array(int[],int);

int main(int argc, char const *argv[])
{
    //VARIANT ONE
/*     int n1,n2,n3;
    cout<<"Insert three integers: ";
    cin>>n1>>n2>>n3;

    sort(n1,n2,n3);
    cout<<"Sorted numbers: "<<n1<<n2<<n3<<endl; */

    //VARIANT TWO
    int dim;
    cout<<"How many numbers you want to sort? ";
    cin>>dim;
    int numbers[dim];

    read_array(numbers,dim);

    bubble_sort(numbers,dim);

    print_array(numbers,dim);

    return 0;

}

void bubble_sort(int arr[], int n) {
    // Ciclo esterno per passare attraverso l'intero array
    for (int i = 0; i < n - 1; i++) {
        // Ciclo interno per confrontare gli elementi
        for (int j = 0; j < n - i - 1; j++) {
            // Scambiare se l'elemento corrente è maggiore del successivo
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void sort(int& n1, int& n2, int& n3) {
    if (n1 > n2) swap(n1, n2);
    if (n1 > n3) swap(n1, n3);
    if (n2 > n3) swap(n2, n3);
}

void swap(int *first_value,int *second_value){
    int temp;
    temp=*first_value;
    *first_value=*second_value;
    *second_value=temp;
}

void read_array(int arr[],int dim){
    
    for (size_t i = 0; i < dim; i++)
    {
        cout<<i+1<<" number: ";
        cin>>arr[i];
    }
    
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}



