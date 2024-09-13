using namespace std;
#include <iostream>

char convert_to_lowercase(char c){
    if(c >= 'A' && c <= 'Z'){
        return c + 32;
    }
    return c;
}

int main(int argc, char const *argv[])
{
    char c_1 = 'A';
    char c_2='Z';

    char converted_1=convert_to_lowercase(c_1);
    char converted_2=convert_to_lowercase(c_2);

    if (converted_1 != c_1){
        cout<<"original char: "<<c_1<<", converted char: "<<converted_1<<endl;
    }
    else{
        cout<<"original char: "<<c_1<<" not an uppercase letter"<<endl;
    }

    if (converted_2 != c_2){
        cout<<"original char: "<<c_2<<", converted char: "<<converted_2<<endl;
    }
    else{
        cout<<"original char: "<<c_2<<" not an uppercase letter"<<endl;
    }
    
    
    return 0;
}
