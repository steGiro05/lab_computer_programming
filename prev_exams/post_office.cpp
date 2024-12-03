#include <iostream>
using namespace std;

class Queue;

class Node{
    friend class Queue;

    private:
    Node(string d){
        data=d;
        next=nullptr;
    }
    string data;
    Node * next;
};

class Queue{
    public:
        Queue(){
            start= nullptr;
        }

        void enqueue(string data){
            if(start==nullptr)start=new Node(data);
            else {
                enqueue_recursive(data, start);
            }
        }

        string dequeue(){
            if(start==nullptr)
                return "Queue is empty";
            
            string data = start->data;
            start=start->next;
            return data;
        }

        string to_string(){
            if(start==nullptr)
                return "Queue is empty";

            return to_string_recursive(start);
        };

        void deallocate_queue(){
            deallocate_queue_recursive(start);
        }

    private:
        Node * start;
        void enqueue_recursive(string data, Node * iterator){
            if(iterator->next==nullptr){
                iterator->next=new Node(data);
                return;
            }
            enqueue_recursive(data,iterator->next);
        }

        string to_string_recursive(Node * iterator){
            if(iterator==nullptr)return "\b\b.";
            return iterator->data+", "+to_string_recursive(iterator->next);
        }

        void deallocate_queue_recursive(Node * iterator){
            if(iterator==nullptr)return;
            deallocate_queue_recursive(iterator->next);
            delete iterator;
        }
    
};

int main(int argc, char const *argv[])
{
    Queue q;
    q.enqueue("pippo");
    q.enqueue("pluto");
    q.enqueue("ciao");
    q.dequeue();

    cout<<q.to_string();
    return 0;
}
