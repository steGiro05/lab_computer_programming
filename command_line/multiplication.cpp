using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    if (argc==1){
        cout<<"No argument"<<endl;
        return -1;
    }

    int product=1;
    for (size_t i = 1; i < argc; i++)
    {
        try
        {
            product*=stoi(argv[i]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() <<" Input error"<< '\n';
            return -1;
        }
        
    }

    cout<<"Poduct: "<<product;
    
    return 0;
}
