using namespace std;
#include <iostream>

struct Node
{
    int data;
    Node * next;
};

struct List
{
    private:
    Node * head=nullptr;

    void insert_recursive(int data, Node * i){
        if(i->next==nullptr){
            Node * tmp = new Node;
            tmp->data=data;
            tmp->next=nullptr;
            i->next=tmp;
        }
        else insert_recursive(data, i->next);
    } 

    void print_recursive(Node * i){
        if(i==nullptr) return;
        cout<<i->data<<endl;
        print_recursive(i->next);
    }

    void deallocate_recursive(Node * i){
        if(i == nullptr) return;
        deallocate_recursive(i->next);
        delete i;
    }

    int count_appearences(int id){
        Node * i=head;
        int count=0;
        while (i!=nullptr)
        {
            if(i->data==id)count ++;
            i=i->next;
        }
        return count;
        
    }
    public:

    List * check_integrity(List * entrance, List * exit){
        List * p = new List;
        Node * i = head;
        while (i!=nullptr)
        {
            if(entrance->count_appearences(i->data)!=exit->count_appearences(i->data)) p->insert(i->data);
            i=i->next;
        }

        return p;
        
    }

    void insert(int data){
        if (head == nullptr){
            head = new Node;
            head->data=data;
            head->next=nullptr;
        }

        else insert_recursive(data, head);
    }

    void print(){
        if (head == nullptr){
            cout<<"Empty list";
        }

        else print_recursive(head);
    }

    void deallocate(){
        deallocate_recursive(head);
    }

};


int main(int argc, char const *argv[])
{
    List * users= new List;
    List * entry= new List;
    List * exit= new List;

    users->insert(1);
    users->insert(2);
    users->insert(3);

    entry->insert(1);
    entry->insert(2);
    entry->insert(3);

    exit->insert(1);
    exit->insert(2);
    exit->insert(3);
    exit->insert(3);

    List * p = users->check_integrity(entry, exit);
    p->print();


    p->deallocate();
    users->deallocate();
    entry->deallocate();
    exit->deallocate();
    delete users;
    delete entry;
    delete exit;
    delete p;

    return 0;
}
