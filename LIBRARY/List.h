#include <string>
#ifndef LIST_H  
#define LIST_H 

template <typename T>
class List;

template <typename T>
class Node {
friend class List<T>;
private:
    Node(T data, Node<T>* next = nullptr) : data(data), next(next) {}
    T data;
    Node<T> * next;
};

template <typename T>
class List {
public:
    List(): head(nullptr){};
    void add_element(T element);
    void print() const;
private:
    Node<T> * head;
};


template <typename T>
void List<T>::add_element(T element){
    if (List::head==nullptr)
    {
        head =  new Node<T>(element, nullptr);
    }
    else{
        Node<T> * iterator=head;
        while (iterator->next!=nullptr)
        {
            iterator=iterator->next;
        }
        iterator->next=new Node<T>(element,nullptr);
    }
}

template <typename T>
void List<T>::print() const {
    if(head == nullptr){
        cout<<"Empty list\n";
        return;
    }

    Node<T> * iterator = head;
    while (iterator!=nullptr)
    {
        cout<<iterator->data<<endl;
        iterator = iterator->next;
    }
    
}

#endif // LIST_H    