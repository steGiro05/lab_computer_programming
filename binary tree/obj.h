#include <string>
#include <iostream>

class TreeNode{
    private:
        int data;
        TreeNode * left;
        TreeNode * right;

    protected:
        void setData(int d){data = d;};
        void setLeft(TreeNode * node){left = node;};
        void setRight(TreeNode * node){right = node;};
        bool hasLeft(){return (left != nullptr);}
        bool hasRight(){return (right != nullptr);}

    public:
        int getData(){return data;};
        TreeNode * getLeft(){return left;};
        TreeNode * getRight(){return right;};
        TreeNode (int d):data(d),left(nullptr),right(nullptr){};
        TreeNode (const TreeNode & T):data(T.data),left(nullptr),right(nullptr){std::cout<<"called copy constructor of treenode";}

    friend class Tree;
};

class Tree{
    private:
        TreeNode * root;
        bool isEmpty(){return (root == nullptr);};
        void visualize_recursive(TreeNode * root, int space);
        void destruct_recursive(TreeNode *);
        void insert(int data, TreeNode * i = nullptr);
        static bool isSearchTreeRec(TreeNode * i, int max = INT_MAX, int min = INT_MIN);

    public:
        Tree ():root(nullptr){};
        ~Tree();
        void visualize();
        int loadFromFile(std::string filename);
        void print_ascending(TreeNode * i = nullptr);
        void search(int n, TreeNode * i = nullptr);

        static bool isSearchTree(Tree t);
        static bool areEqual(Tree t1,Tree t2);
};
