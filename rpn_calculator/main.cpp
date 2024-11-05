using namespace std;
#include <iostream>

struct node{
    double data;
    node * next;
};

//list functions
int length (node * start);
node * insert_first(node * start,double val);//returns the new starting point
node * remove_first(node * start);//returns the new starting point
void print(node * start);
void deallocate_list(node *start);

int main(int argc, char const *argv[])
{
    node *stack= NULL;
    string user_input;
    do
    {
        cin>>user_input;
        if (user_input=="q");

        else if (user_input=="p"){

        }
        else {
            try
            {
                double number=stod(user_input);
                if(stack==NULL){
                    stack= new node;
                    stack->data=number;
                }
                else insert_first(stack,number);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        
    } while (user_input!="q");
    
    deallocate_list(stack);
    return 0;
}

void print(node * start){
    if(start==NULL) cout<<"Stack is empty";
    else{
        do
        {
            cout << start->data<<endl;
            start=start->next;
        }
        while (start->next!=NULL);
    }
    
}

int length (node * start) {
 int len = 0;
 for( ; start != NULL; start = start->next) len++;
 return len;
}

node * insert_first(node * start, double val) {
 node * new_node = new node;
 new_node->data = val;
 new_node->next = start;
 return new_node;
}

node * remove_first(node * start) {
 node * n = start;
 if (start != NULL) {
 start = start->next;
 delete n;
 }
 return start;
}

void deallocate_list(node *start) {
    node *temp;
    while (start != NULL) {
        temp = start;
        start = start->next;
        delete temp;  // Free the memory of the current node
    }
}