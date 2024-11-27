using namespace std;
#include <iostream>
#include <fstream>
#include "../LIBRARY/Int_tree.h"

int search_for_value(Int_tree tree);
int load_tree(Int_tree * tree);

int main(int argc, char const *argv[])
{
    //initialization
    Int_tree tree;//by default is nullptr

    //functions
    int user_in;
    do
    {
        cout<<"BINARY TREE APP\n1)Search for a number\n2)Print the tree\n3)Load a tree\n10)Quit\n";
        cin>>user_in;
        if(cin.fail()||cin.peek()!='\n'){
            cerr<<"Invalid input";
            return 1;
        }

        switch (user_in)
        {
        case 1:
            if (search_for_value(tree))return 1;
            break;
        case 2:
            cout<<tree<<endl;
            break;
        case 3:
            if (load_tree(&tree)) return 1;
            break;
        default:
            if(user_in!=10)cout<<"Not a valid option\n";
            break;
        }

    } while (user_in!=10);
    
    
    cout<<"Terminating execution..\n";
    tree.deallocate();
    return 0;
}

int search_for_value(Int_tree tree){
    int val;
    cout<<"Value to search: ";
    cin>>val;

    if(cin.fail()||cin.peek()!='\n'){
        cerr<<"Invalid input";
        return 1;
    }

    try
    {
        cout<<tree.get_path(val)<<endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "Value not found" << '\n';
    }


    return 0;
    
}

int load_tree(Int_tree * tree){
    string filename;
    cout<<"Filename: ";
    cin>>filename;

    fstream fin;
    fin.open(filename,ios::in);
    if (fin.fail())
    {
        cerr<<"Error opening the input file\n";
        return 0;
    }

    if(fin.is_open()){
        tree->deallocate();
        string s;
        while (!fin.eof())
        {
            getline(fin,s);
            try
            {
                tree->insert(stoi(s));
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what()<<": invalid data in the file" << '\n';
                return 1;
            }
            
        }
        
    }
    cout<<"Tree successfully loaded\n";
    return 0;

}