#include "obj.h"
using namespace std;
#include <iostream>

bool load(Tree * t){
    delete t;
    t=new Tree;

    string filename;

    cout<<"Insert filename: ";
    cin>>filename;
    int res = t->loadFromFile(filename);
    bool fail = false;

    switch (res)
    {
    case -1:
        fail=true;  
        cerr<<"Error opening file"<<endl;
        break;
    
    case -2:
        fail = true;
        cerr<<"Invalid input in file "<<filename<<endl;
        break;
    
    case -3:
        fail = true;
        cerr<<"Deallocate previous tree first"<<filename<<endl;
        break;
    default:
        break;
    }

    return fail;
}

void print(Tree * t){
    t->print_ascending();
    cout<<endl;
}

void search_input(Tree * t){
    cout<<"Number to search: ";
    int n;
    cin>>n;

    if(cin.fail() || cin.peek()!='\n') cerr << "Invalid input";

    else{
        t->search(n);
    }

}

void menu(Tree * t){
    char in;

    do
    {
        cout<<"s) Search for a number\np)Print the tree in ascending order\nv)Visualize the tree\nl)Load tree from file\nx)Exit\n";
        cin >> in;
        if(cin.fail()||cin.peek()!='\n'){
            cerr<< "Invalid input\n";
            return;
        }

        switch (in)
        {
        case 's':
            search_input(t);
            break;

        case 'p':
            print(t);
            break;

        case 'v':
            t->visualize();
            break;

        case 'l':
            load(t);
            break;

        case 'x':
            break;
        
        default:
            cout<<"Invalid option\n";
            break;
        }

    } while (in != 'x');
}

int main(int argc, char const *argv[])
{
    Tree * t= new Tree;
    
    menu(t);

    cout << "Stopping program execution";
    

    delete t;
    t=nullptr;
    return 0;
}
