using namespace std;
#include <iostream>

int minimum(int *arr,int dim);
int maximum(int *arr,int dim);
double avg(int *arr,int dim);
void concatenate_arrays(int *res,int &res_index,int res_size,int *arr1,int arr_size);
void print_array(int *arr,int dim);
void input_grades(int (*grades2)[5], int students_number, int grades_number);

int main(int argc, char const *argv[])
{
    const int students_number=4;
    const int grades_number=5;

    int res[students_number*grades_number];
    int grades2[students_number][grades_number];

    try
    {
        input_grades(grades2,students_number,grades_number);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }


    for (size_t i = 0; i < students_number; i++)
    {
        int size=sizeof(grades2[i])/sizeof(grades2[i][0]);
        cout<<"Student n."<<i+1<<":\n";
        cout<<"Grades: ";
        print_array(grades2[i],size);
        cout<<endl;
        cout<<"Average: "<<avg(grades2[i],size)<<endl;
        cout<<"Min: "<<minimum(grades2[i],size)<<endl;
        cout<<"Max: "<<maximum(grades2[i],size)<<endl;
        cout<<endl;
    }

    int res_index=0;
    for (size_t i = 0; i < students_number; i++)
    {
        try
        {
            concatenate_arrays(res,res_index,sizeof(res)/sizeof(res[0]),grades2[i],sizeof(grades2[i])/sizeof(grades2[i][0]));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return -1;
        }
        
    }

    int size=sizeof(res)/sizeof(res[0]);
    cout<<"Class:\n";
    cout<<"Average: "<<avg(res,size)<<endl;
    cout<<"Min: "<<minimum(res,size)<<endl;
    cout<<"Max: "<<maximum(res,size)<<endl;
    

  
    
    return 0;
}

int minimum(int *arr,int dim){
    int min=arr[0];
    for (size_t i = 1; i < dim; i++)
    {
       if(arr[i]<min)min=arr[i];
    }
    return min;
}

int maximum(int *arr,int dim){
    int max=arr[0];
    for (size_t i = 1; i < dim; i++)
    {
       if(arr[i]>max)max=arr[i];
    }
    return max;
}

double avg(int *arr,int dim){
    int sum=0;
    for (size_t i = 0; i < dim; i++)
    {
        sum+=arr[i];
    }
    return double(sum)/double(dim);
    
}

void concatenate_arrays(int *res,int &res_index,int res_size,int *arr1,int arr_size){
    for (size_t i = 0; i < arr_size; i++)
    {
        if(res_index+i>=res_size)throw runtime_error("Index out of bound");
        res[res_index+i]=arr1[i];
    }
    res_index+=arr_size;
    
}

void print_array(int *arr, int dim) {
    for (int i = 0; i < dim; ++i) {
        cout << arr[i] << " ";
    }
}

void input_grades(int (*grades2)[5], int students_number, int grades_number) {
    for (int i = 0; i < students_number; ++i) {
        cout << "Enter grades for student " << (i + 1) << ": ";
        for (int j = 0; j < grades_number; ++j) {
            int input;
            cin >> input;

            if (input<0||input>30||cin.fail())
                throw runtime_error("Input error");
            
            grades2[i][j]=input;
            
        }
        if(cin.peek()!='\n')
            throw runtime_error("Input error");

    }
}