#include "obj.h"
#include <iostream>
#include <fstream>
using namespace std;

void Tree::destruct_recursive(TreeNode * n){
    if(n == nullptr) return;
    destruct_recursive (n->getLeft());
    destruct_recursive (n->getRight());
    delete n;
}

Tree::~Tree(){
    destruct_recursive(root);
    root = nullptr;
}

void Tree::visualize_recursive(TreeNode * root, int space=0){
    if(root->hasRight())visualize_recursive(root->getRight(),space + 1);
    cout<<string(space*10, ' ')<<root->data<<endl; 
    if(root->hasLeft())visualize_recursive(root->getLeft(),space+1); 
}

void Tree::visualize(){
    if(isEmpty())cout << "empty tree";
    else visualize_recursive(root);
}

void Tree::insert(int data, TreeNode * i){
    if (isEmpty()){
        root = new TreeNode(data);
        return;
    }

    if (i==nullptr)
    {
        i=root;
    }
    if(data<=i->data){
        if(i->getLeft() == nullptr) i->setLeft(new TreeNode(data));
        else insert(data,i->getLeft());
    }
    else{
        if(i->getRight() == nullptr) i->setRight(new TreeNode(data));
        else insert(data,i->getRight());
    }
    
}

int Tree::loadFromFile(string filename){
    if(!isEmpty())return -3;
    ifstream myStream;
    myStream.open(filename);

    if(!myStream.is_open())return -1;

    string line;
    while (getline(myStream,line))
    {
        try
        {
            insert(stoi(line));
        }
        catch(const std::exception& e)
        {
            return -2;
        }
        
    }
    

    myStream.close();
    return 0;
}

void Tree::print_ascending(TreeNode * i){
    if(isEmpty()){
        cout<<"Empty tree"<<endl;
        return;
    } 
    if(i==nullptr) i = root;
    if (i->hasLeft())print_ascending(i->getLeft());
    cout<<i->data<<" ";
    if (i->hasRight()) print_ascending(i->getRight());
}

void Tree::search(int n, TreeNode * i ){
    if (isEmpty()){
        cout<<"Empty tree"<<endl;   
        return;
    }
    if(i == nullptr)i=root;
    if(n == i->data){
        cout<<endl;
        return;
    }
    cout<<i->data<<" ";
    if (n<i->data)
    {
        cout<<"left ";
        search(n, i->getLeft());
    }
    else{
        cout<<"right ";
        search(n, i->getRight());
    }
     
}

bool isSearchTreeRec(TreeNode * i, int max, int min){
    if(i==nullptr) return true;
    else if (i->getData()>max || i->getData()<=min)
    {
        return false;
    }
    
    
    return isSearchTreeRec(i->getLeft(),i->getData(),min) && isSearchTreeRec(i->getRight(),max,i->getData());
}


bool Tree::isSearchTree(Tree t){
    if (t.isEmpty())return true;
    return isSearchTreeRec(t.root);
}

