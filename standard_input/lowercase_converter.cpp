using namespace std;
#include <iostream>

char convert_to_lowercase(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 'a'-'A';
    }
    return c;
}

int main(int argc, char const *argv[])
{
    char input;
    

    cout<<"Set of uppercase characters: ";
    while (cin.get(input) && input != '\n'){
        if(input==' ') {
            continue;
        }
        char lowercase_letter=convert_to_lowercase(input);
        if(lowercase_letter == '*' || cin.fail()){
            cout<<"Invalid input!\n";
            return 1;
        }
        cout<<lowercase_letter<<endl;
    }

    
    return 0;
}
