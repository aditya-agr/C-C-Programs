#include<iostream>
#include<conio.h>

using namespace std;
struct node
{
    int data;
    node* prev, *next;
};

class Doubly_Linkedlist
{
private:
    node * start;
public:
    Doubly_Linkedlist();
    void addAtBeg(int num);
    void add(int num);
    ~Doubly_Linkedlist();
};

Doubly_Linkedlist::Doubly_Linkedlist()
{
    start = NULL;
}
void Doubly_Linkedlist::addAtBeg(int num)
{
    node*temp =new node;
    temp->data = num;
    temp->prev = NULL;
    temp->next = start;
    if(start != NULL)
        start->prev = temp;
    start = temp;
}

Doubly_Linkedlist::~Doubly_Linkedlist()
{
    node*temp;
    while (start != NULL)
    {
        temp = start;
        start = start->next;
        delete temp;
    }
}


int main()
{
    
    getch();
    return 0;
}