using namespace std;
#include <iostream>

int SIZE = 5;

void generate(int arr[], int dim){
    for (size_t i = 0; i < dim; i++)
    {
        arr[i]=rand()%11;
    }
    
}

void print(int arr[], int dim){
    for (size_t i = 0; i < dim; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int pos1, int pos2){
    int tmp = arr[pos1];
    arr[pos1]=arr[pos2];
    arr[pos2]=tmp;
}

void bubble_sort(int arr[], int dim){
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (size_t i = 1; i < dim; i++)
        {
            if(arr[i-1]>arr[i]){
                swap (arr, i, i-1);
                swapped= true;
            } 
    
        }
        
    }
    
    
}

void merge(int arr1[], int arr2[], int dim1, int dim2, int merged[]){
    for (size_t i = 0; i < dim1; i++)
    {
        merged[i]=arr1[i];
    }

    for (size_t i = 0; i < dim2; i++)
    {
        merged[i+dim1]=arr2[i];
    }
    
    
}

int sum (int arr[], int dim){
    int s = 0;
    for (size_t i = 0; i < dim; i++)
    {
        s+=arr[i];
    }
    return s;
}

int max(int arr[], int dim){
    int m = arr[0];
    for (size_t i = 1; i < dim; i++)
    {
        if (arr[i]>m)m=arr[i];
    }
    return m;
}

int min(int arr[], int dim){
    int m = arr[0];
    for (size_t i = 1; i < dim; i++)
    {
        if (arr[i]<m)m=arr[i];
    }
    return m;
}

float median(int arr[], int dim){
    float m;
    if (dim%2==0)
    {
        m = (arr[dim/2]+arr[(dim/2)-1])/2.0;
    }
    else m = arr[dim/2];
    return m;
} 

float mean (int arr[], int dim){
    int s = sum(arr,dim);
    return s / (float) dim;
}



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int arr1[SIZE], arr2[SIZE], merged[SIZE*2];

    generate(arr1,SIZE);
    generate(arr2,SIZE);

    cout<<"Initial arrays:\n";
    print (arr1, SIZE);
    print (arr2, SIZE);

    merge(arr1,arr2,SIZE,SIZE,merged);
    bubble_sort(merged, SIZE*2);

    cout<<"Merged array:\n";
    print(merged,SIZE*2);
    
    cout<<"Sum: "<<sum(merged, SIZE*2)<<endl;
    cout<<"Max: "<<max(merged, SIZE*2)<<endl;
    cout<<"Min: "<<min(merged, SIZE*2)<<endl;
    cout<<"Mean: "<<mean(merged, SIZE*2)<<endl;
    cout<<"Median: "<<median(merged, SIZE*2)<<endl;
    return 0;
}
