#include <iostream>

class Queue{
    private:
        int first;
        int next;
        int *arr;
        int MAX_SIZE;
        int cnt;
    public:
        Queue() = default;
        Queue(int sz){
            MAX_SIZE = sz + 1;
            arr = new int[MAX_SIZE];
            first = next = cnt = 0;
        }

        void enqueu(int v){
            if(!isFull()){
                arr[next] = v;
                next = (next+1)%MAX_SIZE;
                cnt ++;
            }

        }

        int dequeue(){
            if(!isEmpty()){
                int temp = arr[first];
                first = (first+1)%MAX_SIZE;
                cnt--;
                return temp;
            }

        }

        void print(){
            for(int iter = first;iter!=next;){
                std::cout<<arr[iter]<<" ";
                iter = (iter+1)%MAX_SIZE;
            }
            std::cout<<std::endl;
        }

        bool isFull(){
            return ((next+1)%MAX_SIZE) == first;
        }

        bool isEmpty(){
            return first == next;
        }

        int getCount(){
            return cnt;
        }

};

class Stack{
    public:
        Queue main_q,temp_q;
        int MAX_SIZE;
        int cnt;
        Stack(int sz){
            MAX_SIZE = sz;
            main_q = Queue(MAX_SIZE);
            temp_q = Queue(MAX_SIZE);
            cnt = 0;
        }

        void push(int v){
            if(!isFull()){
                main_q.enqueu(v);
                cnt++;
            }else{
                std::cout<<"stack is full"<<std::endl;
            }
        }

        int pop(){
            if(!isEmpty()){
                int c = cnt;
                while(main_q.getCount()!=1){
                    temp_q.enqueu(main_q.dequeue());
                }
                
                Queue temp = temp_q;
                temp_q = main_q;
                main_q = temp;
                cnt--;
                return temp_q.dequeue();
            }else{
                std::cout<<"stack is empty!"<<std::endl;
            }
        }

        bool isFull(){
            return main_q.isFull();
        }

        bool isEmpty(){
            return main_q.isEmpty();
        }

        void print(){
            main_q.print();
        }

};

int main(){
    int MAX_SIZE = 5;
    Stack stk = Stack(MAX_SIZE);
    stk.push(1);
    stk.print();
    stk.push(2);
    stk.print();

    stk.push(3);
    stk.print();

    stk.push(4);
    stk.print();

    stk.push(5);
    stk.print();

    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.pop();
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();
    stk.push(5);
    stk.print();


}