using namespace std;
#include <iostream>

#define PATTERN_DIM 3
#define TEXT_DIM 7

bool check_pattern(int pattern[],int text[]);

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int pattern[PATTERN_DIM];
    int text[TEXT_DIM];

     for (size_t i = 0; i < PATTERN_DIM; i++)
    {
        pattern[i]=rand();
    }
    
    for (size_t i = 0; i < TEXT_DIM; i++)
    {
        text[i]=rand();
    } 

    if(check_pattern(pattern,text))cout<<"Pattern in text!\n";
    else cout<<"Pattern not in text!\n";

    

    return 0;
}

bool check_pattern(int pattern[],int text[]){
    bool match=false;
    for (size_t i = 0; i < TEXT_DIM-PATTERN_DIM+1; i++)
    {
        if(match)break;
        if(text[i]==pattern[0]){
            for (size_t j = 1; j < PATTERN_DIM; j++)
            {
                if(text[i+j]!=pattern[j]){
                    match=false;
                    break;
                }
                match=true;
            }
            
        }

    }
    return match;
    
}