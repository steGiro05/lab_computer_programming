using namespace std;
#include <iostream>

int LIST_DIM = 5;
int LIST_MAX_VAL = 100;

struct Node
{
    int data;
    Node * next;
};

struct List
{

    private: 
    Node * start=nullptr;

    void append_recursive(int data, Node  * i){
        if(i->next== nullptr){
            Node * tmp = new Node;
            tmp->next=nullptr;
            tmp->data=data;
            i->next=tmp;
        }
        else append_recursive(data, i->next);
    };

    void print_recursive( Node  * i){
        if(i== nullptr) return;
        else {
            cout<<i->data<<endl;
            print_recursive( i->next);
        }
    };

    void deallocate_recursive(Node * i){
        if(i==nullptr)return;
        Node * tmp=i;
        i = i->next;
        delete tmp;
        deallocate_recursive(i);
    }

    public:
    void append(int data){
        if(start == nullptr){
            start = new Node;
            start->data=data;
            start->next=nullptr;
        }
        else append_recursive(data,start);
    }

    void print(){
        if(start == nullptr){
            cout<<"Empty list";
        }
        else print_recursive(start);
    }

    void deallocate(){
        deallocate_recursive(start);
        start=nullptr;
    }

};

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    List * list_a = new List;
    List * list_b = new List;

    for (size_t i = 0; i < LIST_DIM; i++)
    {
        list_a->append(rand()%LIST_MAX_VAL);
        list_b->append(rand()%LIST_MAX_VAL);
    }

    cout<<"List a: \n";
    list_a->print();
    cout<<"List b: \n";
    list_b->print();
    

    list_a->deallocate();
    delete list_a;

    list_b->deallocate();
    delete list_b;
    return 0;
}

