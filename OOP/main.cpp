using namespace std;
#include <iostream>

class Book{
    public:
        int * a;
        Book(){};
        Book(const Book & b){
            cout<<"copy const"<<endl;
        }
};

void fcn (Book b){
    cout << "func"<<endl;
}

int main(int argc, char const *argv[])
{
    Book b;
    int value = 10;
    b.a=&value;
    fcn(b);
}
