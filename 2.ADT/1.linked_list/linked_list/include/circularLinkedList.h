#ifndef circularLinkedList_h
#define circularLinkedList_h



class CircularLlist{
    private:
        struct Cell{
            Cell() = default;
            Cell(int v):value(v){}
            int value;
            Cell *next = nullptr;
        };

        Cell *top;
    public:
        CircularLlist();
        void addAtBegining(int );
        void addAtEnd(int );
        void insertAfter(int ,int );
        void insertSorted(int);
        void deleteCell(int);
        void destroyList();
        void copyList(CircularLlist );
        void isort();
        Cell *begin(){
            return this->top;
        }
        void print();
};

#endif