using namespace std;
#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
    try
    {
        int x;
        char input;
        cout<<"Value of X: ";
        cin>> x;
        if(cin.fail()){
            throw runtime_error("X must be integer");
        }

        for (size_t i = 0; i < x; i++)
        {
            cout<<"Char: ";
            cin >>input;
            if(cin.peek()!='\n'){
                throw runtime_error("Just one character at the time");
            }
            cout<<(char)toupper(input)<<endl;
        }
        

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
