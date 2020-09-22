#include <iostream>
#include <string>
using namespace std;

class BinarySearchTree{
    private:
        struct Node{
            int key;
            Node *leftChild = nullptr;
            Node *rightChild = nullptr;
            Node() = default;
            Node(int k): key(k){}
        };
        Node *root;
    public:
        BinarySearchTree(){
            this->root = nullptr;
        }

        Node * find(int key){
            return rFind(key,this->root);
        }

        Node * rFind(int key,Node *&root){
            if(root == nullptr) return nullptr;
            if(root->key == key) return root;
            if(key < root->key){
                return rFind(key,root->leftChild);
            }
               return rFind(key,root->rightChild);
        }

        void insert(int key){
            auto node = find(key);
            if(node==nullptr){
                rInsert(key,this->root);
            }else{
                cout<<" Node Is allready present!";
            }
        }
        void rInsert(int key,Node *&root){
            if(root == nullptr){
                root = new Node(key);
            }else if(key< root->key){
                rInsert(key,root->leftChild);
            }else{
                rInsert(key,root->rightChild);
            }


        }
        void inorderTraverse(){
            rInorderTraverse(this->root);
            cout<<endl;
        }
        void rInorderTraverse(Node *root){
            if (root == nullptr)  return;
            rInorderTraverse(root->leftChild);
            cout<<root->key<<" ";
            rInorderTraverse(root->rightChild);
        }

        void findRMin(int key){
            auto n = find(key);
            if(n!= nullptr){
                rfindMin(n->rightChild);
            }else{
                cout<<"key not in the tree";
            }
        }
        void rfindMin(Node *root){
           if (root == nullptr) {cout<<"No Child!"<<endl; return;}
           while(root->leftChild != nullptr){
               root = root->leftChild;
           }
           cout<<root->key<<" ";
           return;
        }
        void findLMax(int key){
            auto n = find(key);
            if(n!= nullptr){
                rfindMin(n->leftChild);
            }else{
                cout<<"key not in the tree";
            }
        }
        void rfindMax(Node *root){
            if (root == nullptr) {cout<<"No Child!"<<endl; return;}
            while(root->rightChild != nullptr){
               root = root->rightChild;
           }
           cout<<root->key<<" ";
           return;
        }
};

int main(){
    BinarySearchTree bst;
    bst.insert(4);
    bst.insert(3);
    bst.insert(6);
    bst.insert(5);
    bst.insert(2);
    bst.insert(1);
    bst.insert(10);
    bst.inorderTraverse();
    bst.findRMin(5);
    bst.findLMax(4);

    return 0;
}