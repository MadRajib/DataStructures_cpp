#include <iostream>
#include <string>

template <class T>
class Queue{
    private:
        T *queue;
        int next = 0;
        int front = 0;
        int MAX_SIZE=1;
    public:
        Queue(int sz){
            MAX_SIZE = sz+1;
            queue = new T[MAX_SIZE];
        }

        void enqueue(T val){
            if(!isFull()){
                queue[next] = val;
                next =  (next+1)%MAX_SIZE;
            }
        }

        T dequeue(){
            if(!isEmpty()){
                T tmp = queue[front];
                front =  (front+1)%MAX_SIZE;
                return tmp;
            }
        }
        bool isEmpty(){
            return next == front;
        }
        bool isFull(){
            return ((next+1)%MAX_SIZE) == front;
        }
};
class BinaryNode{
    public:
        std::string data = nullptr;
        BinaryNode *leftChild = nullptr;
        BinaryNode *rightChild = nullptr;
        BinaryNode() = default;
        BinaryNode( std::string dat):data(dat){}

        void traversePreOder(BinaryNode *node){
            std::cout<<node->data<<" ";
            if(node->leftChild!= nullptr) traversePreOder(node->leftChild);
            if (node->rightChild!= nullptr) traversePreOder(node->rightChild);
        }
        void traverseInOder(BinaryNode *node){
           
            if(node->leftChild!= nullptr) traverseInOder(node->leftChild);
            std::cout<<node->data<<" ";
            if (node->rightChild!= nullptr) traverseInOder(node->rightChild);
            
        }
        void traversePostOder(BinaryNode *node){
            if(node->leftChild!= nullptr) traversePostOder(node->leftChild);
            if (node->rightChild!= nullptr) traversePostOder(node->rightChild);
             std::cout<<node->data<<" ";
        }
        void traverseLevelOder(BinaryNode *node){
            Queue<BinaryNode *> children = Queue<BinaryNode *>(10);

            children.enqueue(node);
            while(!children.isEmpty()){
                BinaryNode *node = children.dequeue();
                std::cout<<node->data<<" ";
                if(node->leftChild!= nullptr) children.enqueue(node->leftChild);
                if(node->rightChild!= nullptr) children.enqueue(node->rightChild);

            }
        }
};
class BinaryTree{
    private:
        BinaryNode root;
    public:
        BinaryTree(std::string data){
            root = BinaryNode(data);
        }

};


int main(){

    BinaryNode *n1 =  new BinaryNode("1");
    BinaryNode *n2 =  new BinaryNode("2");
    BinaryNode *n3 =  new BinaryNode("4");
    BinaryNode *n4 =  new BinaryNode("3");
    BinaryNode *n5 =  new BinaryNode("5");
    n1->leftChild = n2;
    n1->rightChild = n3;
    n2->leftChild = n4;
    n2->rightChild = n5;
    
    n1->traversePreOder(n1);
    std::cout<<std::endl;
    n1->traverseInOder(n1);
    std::cout<<std::endl;
    n1->traversePostOder(n1);
    std::cout<<std::endl;
    n1->traverseLevelOder(n1);
    std::cout<<std::endl;
    return 0;
}