struct Cell{
    Cell() = default;
    Cell(int v):value(v){}
    int value;
    Cell *next = nullptr;
};

class Llist{
    private:
        Cell *top;
        // void insertCell(Cell *after_me,node *new_cell);
    public:
        Llist();
        void addAtBegining(int );
        void addAtEnd(int );
        void insertAfter(int ,int );
        void deleteCell(int);
        void destroyList();
        Cell *begin();
};



