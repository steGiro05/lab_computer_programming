using namespace std;
#include <iostream>

#define DIMENSION 4*100 
//allocated 1||0
//value
//left_child_index
//right_child_index

void initialize_memory(int *memory,int i=0);
int free(int *memory,int i=0);
int add_node(int value,int *memory ,int left_child=-1, int right_child=-1);
bool is_allocated(int index_of_node,int *memory);

int main(int argc, char const *argv[])
{
    int memory[DIMENSION];
    initialize_memory(memory);
    try
    {
        cout<<add_node(4,memory);
        cout<<add_node(4,memory);
        cout<<is_allocated(401,memory);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}

void initialize_memory(int *memory,int i){
    if(i>=DIMENSION)return;
    memory[i]=0;
    memory[i+2]=-1;
    memory[i+3]=-1;
    initialize_memory(memory,i+4);
}

int free(int *memory,int i){
    if(i>DIMENSION) throw runtime_error ("Memory full");
    if(memory[i]==0)return i;
    else return(free(memory,i+4));
}

int add_node(int value,  int *memory,int left_child, int right_child){
    int index=free(memory);
    memory[index]=1;
    memory[index+1]=value;
    memory[index+2]=left_child;
    memory[index+3]=right_child;
    return index;
}
bool is_allocated(int index_of_node,int *memory){
    if (index_of_node>=DIMENSION|| index_of_node<0)throw runtime_error("Invalid index");
    if (memory[index_of_node]==0)return false;
    return true;
}
