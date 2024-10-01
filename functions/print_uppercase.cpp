using namespace std;
#include <iostream>
#include <cctype>

bool check_character(char input_char);
void print_uppercase(char input);

int main(int argc, char const *argv[])
{
    /* code */
    char input;
    cout<<"Insert a character: ";
    cin>>input;

    if(cin.peek()!='\n'){
        cout<<"Insert just one character"<<endl;
        return 1;
    }

    if(check_character(input)){
        print_uppercase(input);
    }
    else
        cout<<"Not a lowercase letter!"<<endl;

    return 0;
}

//WITHOUT FUNCTIONS
/*
bool check_character(char input_char){
    return (input_char>='a'&&input_char<='z');
        
}

void print_uppercase(char input){
    cout<<"Uppercase letter: "<<char(input-('a'-'A'))<<endl;
    return;
}
*/

//WITH FUNCTIONS
bool check_character(char input_char){
    return islower(input_char);
}

void print_uppercase(char input){
    cout<<"Uppercase letter: "<<char(toupper(input))<<endl;
    return;
}