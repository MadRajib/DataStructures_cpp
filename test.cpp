class Queue{
    private:
        int front;
        int end;
        int *arr;
        int MAX_SIZE;
        int cnt;
    public:
        Queue() = default;
        Queue(int sz){
            MAX_SIZE = sz;
            arr = new int[MAX_SIZE];
            cnt = 0;
        }

        void enqueu(int v){

        }

        int dequeue(){
            return 0;
        }

        void print(){

        }

        bool isFull(){
            return false;
        }

        bool isEmpty(){
            return false;
        }

};

class Stack{
    public:
        Queue main_q,temp_q;
        Stack(int sz){
            main_q = Queue(sz);
            temp_q = Queue(sz);
        }

        void push(int v){
            if(!main_q.isFull()){
                main_q.enqueu(v);
            }
            
        }

        int pop(){

        }

        bool isFull(){
            return false;
        }

        bool isEmpty(){
            return false;
        }

        void print(){

        }

};

int main(){
    int MAX_SIZE = 10;
    Stack stk = Stack(MAX_SIZE);
}