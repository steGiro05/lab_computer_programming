using namespace std;
#include <iostream>

struct Node
{
    int data;
    Node * prev;
    Node * next;
};

struct List
{
    private:
    Node * head=nullptr;
    int dim=0;

    void insert_recursive(Node * i, int data){
        if(i->next==nullptr){
            Node * tmp = new Node;
            tmp->prev=i;
            tmp->next=nullptr;
            tmp->data=data;
            i->next=tmp;
        }
        else insert_recursive(i->next,data);
    }

    void print_recursive(Node * i){
        if(i==nullptr){
            cout<<endl;
            return;
        }

        cout<<i->data<<" ";
        print_recursive(i->next);
    }
    public:
    void insert(int data){
        dim++;
        if (head==nullptr)
        {
            head = new Node;
            head->data=data;
            head->prev=nullptr;
            head->next=nullptr;
        }
        else insert_recursive(head,data);
        
    }

    void print(){
        if (head==nullptr)
        {
            cout<<"Empty list";
        }
        else print_recursive(head);
        
    }

    int insert_at_position(int data, int pos){
        if(pos>=dim) return -1;
        
        dim++;

        if(pos==1){
            Node * tmp = new Node;
            tmp->data=data;
            tmp->next=head;
            tmp->prev=nullptr;
            head->prev=tmp;
            head=tmp;
        }
        else{
            Node * iterator=head;
            for (size_t i = 1; i < pos; i++)
            {
                iterator=iterator->next;
            }

            Node * prev = iterator->prev;
            Node * tmp = new Node;

            tmp->data=data;
            tmp->prev=prev;
            tmp->next=iterator;

            prev->next=tmp;
            iterator->prev=tmp;
            
        }

        return 0;
        
    }

    void deallocate(){
        Node * tmp;
        while (head!=nullptr)
        {
            tmp=head;
            head=head->next;
            delete tmp;
        }
        
    }
};


void random_dimension(int &x, int limit){
    x=rand()%limit;
}

void random_array(int arr[], int dim){
    for (size_t i = 0; i < dim; i++)
    {
        arr[i]=rand();
    }
    
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int x;
    random_dimension(x,16);

    int * arr= new int[x];
    random_array(arr,x);

    List * l = new List;

    for (size_t i = 0; i < x; i++)
    {
        l->insert(arr[i]);
    }
    
    l->print();

    int pos;
    cout<<"List dimension: "<<x<<endl<<"Pos: ";
    cin >> pos;

    if(l->insert_at_position(rand(),pos)==-1){
        cerr<<"Invalid position";
        return -1;
    }

    l->print();

    //deallocation
    delete [] arr;
    l->deallocate();
    delete l;
    return 0;
}
