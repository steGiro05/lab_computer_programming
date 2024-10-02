using namespace std;
#include <iostream>

int main(int argc, char const *argv[])
{
    for (size_t i = 'A'; i <= 'z'; i++)
    {
        cout<<char(i)<<endl;
        if(i=='Z')
            i+='a'-'Z'-1;
    }
    
    return 0;
}
