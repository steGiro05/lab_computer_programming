using namespace std;
#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
    char input;
    bool err=false;

    cout << "Insert one character: "; 
    do{
    cin >> input;
    err=cin.peek()!='\n';
    if(err){
        cout<<"Insert just one character: ";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    }while(err);

    char result=input+10;
    
    cout<<"Original character: "<<char(result-10)<<" result: "<<result<<endl;

    return 0;
}
