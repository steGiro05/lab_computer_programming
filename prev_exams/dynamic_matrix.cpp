using namespace std;
#include <iostream>
#include <math.h>

int MAX_INT=100;

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int rows,columns;
    int x_start, y_start, rows_sub, columns_sub;

    
    cin>>rows>>columns;
    if(cin.fail()||cin.peek()!='\n'){
        cout<<"Invalid input";
        return 1;
    }
    

    //initialization
    int ** mat = new int * [rows];
    for (size_t i = 0; i < rows; i++)
    {
        mat[i]=new int[columns];
        for (size_t j = 0; j < columns; j++)
        {
            mat[i][j]=rand()%MAX_INT+1;
        }
        
    }

    //print the matrix
    for (size_t i = 0; i < rows; i++)
    {
        for (size_t j = 0; j < columns; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

    cout<<"Dimension of the submatrix: ";
    cin >> y_start>>x_start>>rows_sub>>columns_sub;
    if(cin.fail()||cin.peek()!='\n'){
        cout<<"Invalid input";
        return 1;
    }
    if(x_start>=columns || y_start>=rows){
        cout<<"Invalid start coordinates";
    }

    //print the submatrix
    for (size_t i = y_start; i < min(rows,y_start+rows_sub); i++)
    {
        for (size_t j = x_start; j < min(columns,x_start+columns_sub); j++)
        {
         cout<<mat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    


    
    for (size_t i = 0; i < rows; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
    
    return 0;
}
