/* Single linked list cell */
struct Cell{
    Cell() = default;
    Cell(int v):value(v){}
    int value;
    Cell *next = nullptr;
};
/* Doubly linked list cell */
struct DCell{
    DCell() = default;
    DCell(int v):value(v){}
    int value;
    DCell *next = nullptr;
    DCell *prev = nullptr;
};

/* Single linked list class */
class Llist{
    private:
        Cell *top;
    public:
        Llist();
        void addAtBegining(int );
        void addAtEnd(int );
        void insertAfter(int ,int );
        void insertSorted(int);
        void deleteCell(int);
        void destroyList();
        Cell *begin();
};

/* Doubly linked list class */
class DLlist{
    private:
        DCell *top,*btm;
    public:
        DLlist();
        void addAtBegining(int );
        void addAtEnd(int );
        void insertAfter(int ,int );
        void deleteCell(int);
        void destroyList();
        DCell *begin();
        DCell *end();
};



