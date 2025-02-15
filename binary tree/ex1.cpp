using namespace std;
#include <iostream>

struct Node
{
    int data;
    Node * left=nullptr;
    Node * right=nullptr;
};

void generate(Node *& head){
    head = new Node;
    head->data = 5;

    head->right=new Node;
    Node * right = head->right;
    right->data=3;

    right->right=new Node;
    right->right->data=2;

    right->left=new Node;
    right->left->data=4;

    head->left=new Node;
    Node * left =head->left;
    left->data=7;
    left->right=new Node;
    left->right->data=6;
}

void print (Node * head, int space=0){
    if (head->left!=nullptr)
    {
        space++;
        print(head->left, space);
        space--;
    }

    cout<<string(space*10, ' ')<<head->data<<endl; 

    if (head->right!=nullptr)
    {
        space++;
        print(head->right, space);
    }
    
}

int main(int argc, char const *argv[])
{
    Node * head;

    generate(head);
    print(head);

    return 0;
}
