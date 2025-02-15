using namespace std;
#include <iostream>

void print (int arr[], int dim){
    for (size_t i = 0; i < dim; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap (int arr[], int pos1, int pos2){
    int t = arr[pos2];
    arr[pos2] = arr[pos1];
    arr[pos1] = t;
}

bool iteration (int arr[], int dim){
    int i = 0;
    bool swapped = false;
    while (!swapped && i<dim-1)
    {
        if(arr[i]>arr[i+1]){
            swapped = true;
            swap(arr, i ,i+1);
        }
        i++;
    }
    return swapped;
}

void sort(int arr[],int dim){
    while (iteration(arr,dim));
}

int main(int argc, char const *argv[])
{
    int arr[]={5,12,7,32,56};
    sort(arr,5);
    print(arr,5);
    return 0;
}
