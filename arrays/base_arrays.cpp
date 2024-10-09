using namespace std;
#include <iostream>

//const int MAX_STRING=50; 

void insert_element_at_position(int element, int array[], int pos, int dim);
void print_array(int array[], int dim);
void concatenate(int arr1[], int arr2[], int dim1, int dim2, int arr_result[]);
void concatenate_strings(string str1, string str2, string &re);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int arr[5] = {1, 2, 3, 4, 5};
    
    /*
    print_array(arr, 5);
    insert_element_at_position(3, arr, 6, 5);
    print_array(arr, 5);
    */

    /*
    int arr_2[7] = {6, 7, 8, 9, 10, 11, 12};
    int res[12];
    concatenate(arr, arr_2, 5, 7, res);
    print_array(res, 12);
    */

    /*
    string input, result(MAX_STRING, ' ');
    cout << "Insert a string: ";
    cin >> input;
    concatenate_strings(input, "ciao", result);
    cout << result << endl;
    */

    return 0;
}


void insert_element_at_position(int element,int array[], int pos,int dim){
    if(pos<0 || pos>=dim)return;
    array[pos]=element;
}

void print_array(int array[],int dim){
    for (size_t i = 0; i < dim; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}



void concatenate(int arr1[],int arr2[],int dim1, int dim2,int arr_result[]){
    for (size_t i = 0; i < dim1; i++)
    {
        arr_result[i]=arr1[i];
    }
    for (size_t i = 0; i < dim2; i++)
    {
        arr_result[dim1+i]=arr2[i];
    }
}

void concatenate_strings(string str1, string &res){
    for (size_t i = 0; i < str1.size(); i++)
    {
        res[i]=str1[i];
    }
}
