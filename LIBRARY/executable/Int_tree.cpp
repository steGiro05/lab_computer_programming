using namespace std;
#include <iostream>
#include "../Int_tree.h"

void Int_tree::insert(int data){
    if(start == nullptr){
        start = new Tree_node(data,nullptr,nullptr);
    }
    else{
        Int_tree::insert_recursive(data,start);
    }
}

std::string Int_tree::to_string()const{
    if (start==nullptr)return "Empty tree";
    else return Int_tree::to_string_recursive(start);
}

void Int_tree::insert_recursive(int data, Tree_node * iterator){
    if(data <= iterator->data){
        if(iterator->left_child==nullptr){
            iterator->left_child= new Tree_node(data, nullptr, nullptr);
            return;
        }
        insert_recursive(data,iterator->left_child);
    }
    else {
         if(iterator->right_child==nullptr){
            iterator->right_child= new Tree_node(data, nullptr, nullptr);
            return;
        }
        insert_recursive(data,iterator->right_child);
    }
}

std::string Int_tree::to_string_recursive(Tree_node * iterator)const{
    if(iterator==nullptr)return "";
    return to_string_recursive(iterator->left_child)+std::to_string(iterator->data)+" "+to_string_recursive(iterator->right_child);
    
}

void Int_tree::deallocate(){
    if (start== nullptr) return;
    deallocate_recursive(start);
    start = nullptr;
}

void Int_tree::deallocate_recursive(Tree_node * iterator){
    if(iterator == nullptr)return;
    deallocate_recursive(iterator->left_child);
    deallocate_recursive(iterator->right_child);
    delete iterator;
}

string Int_tree::get_path(int data){
    if (start==nullptr)
    {
        return "Empty three";
    }
    return get_path_recursive(start, data);
    
}

string Int_tree::get_path_recursive(Tree_node * iterator, int data){
    if(iterator==nullptr){
        __throw_runtime_error("Value not found");
    };
    if(iterator->data==data)return "";
    if(data<=iterator->data)return std::to_string(iterator->data)+" left "+get_path_recursive(iterator->left_child,data);
    else return std::to_string(iterator->data)+" right "+get_path_recursive(iterator->right_child,data);
}   


