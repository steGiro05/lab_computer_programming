using namespace std;
#include <iostream>
#include <cctype>

bool check_character(char input_char);
void convert_character(char &input);

int main(int argc, char const *argv[])
{
    char input;
    cout<<"Insert a character: ";
    cin>>input;

    if(cin.peek()!='\n'){
        cout<<"Insert just one character"<<endl;
        return 1;
    }

    if(check_character(input)){
        convert_character(input);
        cout<<input<<endl;
    }
    else cout<<"Not a lowercase letter!"<<endl;

    return 0;
}

bool check_character(char input_char){
    return islower(input_char);
}

void convert_character(char &input){
    input=char(toupper(input));
    return;
}