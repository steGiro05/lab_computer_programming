using namespace std;
#include <iostream>

int max_val(int , int , int , int , int );
int max_val_array(int[],int );
void read_values(int&,int&,int&,int&,int&);
void read_values_array(int[],int);

int main(int argc, char const *argv[])
{
    int a,b=-2147483647 - 1,c=-2147483647 - 1,d=-2147483647 - 1,e=-2147483647 - 1;

    //VARIANT ONE
    //read_values(a,b,c,d,e);

    //VARIANT TWO
/*     try
    {
        read_values(a,b,c,d,e);
        if (cin.fail())
        {
            throw runtime_error("Invalid input");
        }
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return 1;
    } */

    //cout<<"Max: "<<max_val(a,b,c,d,e)<<endl;

   //VARIANT THREE
    /* char exit;

   do
   {
        try
        {
            b=-2147483647 - 1,c=-2147483647 - 1,d=-2147483647 - 1,e=-2147483647 - 1;
            read_values(a,b,c,d,e);
            if (cin.fail())
            {
                throw runtime_error("Invalid input");
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 1;
        }

        cout<<"Max: "<<max_val(a,b,c,d,e)<<endl;
        cout<<"Exit? (y/n)";
        cin>>exit;
        

   } while (exit != 'y'); */
    
    //VARIANT 4
    int numbers_input[5];
    char exit;
    do
   {
        try
        {
            numbers_input[0]=0;
            for (size_t i = 1; i < 5; i++)
            {
                numbers_input[i]=-2147483647 - 1;
            }
            
            read_values_array(numbers_input,5);

            if (cin.fail())
            {
                throw runtime_error("Invalid input");
            }
            
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 1;
        }

        cout<<"Max: "<<max_val_array(numbers_input,5)<<endl;
        cout<<"Exit? (y/n)";
        cin>>exit;
        

   } while (exit != 'y'); 

    return 0;
}

int max_val(int a, int b, int c, int d, int e) {
    return max(max(max(max(a,b),c),d),e);
}

int max_val_array(int arr[],int dim){
    int max_val=arr[0];
    for (size_t i = 1; i < dim; i++)
    {
        max_val=max(arr[i],max_val);
    }
    return max_val;
}

void read_values(int& a,int& b,int& c,int& d,int& e){
    cout<<"Insert a set of max 5 numbers: ";
    cin>>a;
    if(cin.peek()=='\n')return;
    cin>>b;
    if(cin.peek()=='\n')return;
    cin>>c;
    if(cin.peek()=='\n')return;
    cin>>d;
    if(cin.peek()=='\n')return;
    cin>>e;
    if(cin.peek()=='\n')return;
}

void read_values_array(int arr[],int dim){
    cout<<"Insert a set of max 5 numbers: ";
    for (size_t i = 0; i < dim; i++)
    {
        cin>>arr[i];
        if(cin.peek()=='\n')return;
    }
    
}

