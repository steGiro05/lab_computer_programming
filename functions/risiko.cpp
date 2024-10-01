using namespace std;
#include <iostream>
#include <cstdlib>
#include<algorithm>

bool has_defence_won(int str, int def);
int n_defence_wins_2v2(int str1,int str2, int def1,int def2);

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    /*
    int str=rand()%6+1;
    int def=rand()%6+1;
    cout<<"Rolling dices..."<<endl;
    cout<<"Defender gets: "<<def<<", Striker gets: "<<str<<endl;
    (has_defence_won(str,def)) ? cout<<"Defender wins!"<<endl : cout<<"Stricker wins!"<<endl; 
    */
    int str1=rand()%6+1,str2=rand()%6+1;
    int def1=rand()%6+1,def2=rand()%6+1;
    cout<<"Rolling dices..."<<endl;
    cout<<"Defender gets: "<<def1<<" & "<<def2<<", Striker gets: "<<str1<<" & "<<str2<<endl;

    int defence_wins=n_defence_wins_2v2(str1,str2,def1,def2);

    cout<<"Defender wins "<<defence_wins<<" clashes! Striker wins "<<2-defence_wins<<" clashes!"<<endl;

    return 0;
}

bool has_defence_won(int str, int def){
    if(str>def)
        return false;
    return true;
}

int n_defence_wins_2v2(int str1,int str2, int def1,int def2){
    int defence_win=0;
    if(max(def1,def2)>=max(str1,str2)) defence_win++;
    if(min(def1,def2)>=min(str1,str2)) defence_win++;

    return defence_win;
}