using namespace std;
#include <iostream>

double harmonic_serie(int limit,int i=1);

int main(int argc, char const *argv[])
{
    int limit;
    cout<<"Insert an integer limit: ";
    try
    {
        cin>>limit;

        if (cin.fail() || cin.peek()!='\n')throw runtime_error("Input error");
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return -1;
    }

    cout<<"Result: "<<harmonic_serie(limit)<<endl;
    return 0;
}

double harmonic_serie(int limit,int i){
    if(i>limit)return 0;                                                                                 
    return (1.0/i)+harmonic_serie(limit,i+1);
}
