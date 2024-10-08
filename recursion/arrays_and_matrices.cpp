using namespace std;
#include <iostream>

void read_vector(int vector[],int dim);
void print_vector(int vector[],int dim);
void print_vector_reverse(int vector[],int dim);
int sum_elements(int vector[],int dim);
int dot_prod(int vector[],int dim);


int main(int argc, char const *argv[])
{
    int dim;
    cout<<"Size of the array: ";
    cin>>dim;
    int vec[dim];
    read_vector(vec,dim);

    //print_vector_reverse(vec,dim);
    cout<<"sum of the elements: "<<sum_elements(vec,dim)<<endl;


    return 0;
}

void read_vector(int vec[], int dim){
    cout<<"Insert values of the arrya one by one"<<endl;
    for (size_t i = 0; i < dim; i++)
    {
        cout<<i+1<<" value: ";
        cin>>vec[i];
    }
    
}


void print_vector(int vector[], int dim) {
    for (int i = 0; i < dim; i++) {
        cout << vector[i] << " ";
    }
    cout << endl; // A capo dopo aver stampato tutti gli elementi
}

void print_vector_reverse(int vector[],int dim){
    if(dim==0){
    cout<<endl;
    return;
    } 
    cout<<vector[dim-1]<<" ";
    print_vector_reverse(vector,dim-1);
}

int sum_elements(int vector[],int dim){
    if(dim==0){
    return 0;
    } 
    return vector[dim-1]+sum_elements(vector,dim-1);
}

int dot_prod(int vector[],int dim){
    return;
}