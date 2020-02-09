#if !defined(LIST_H_INCLUDED)
#define LIST_H_INCLUDED

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct List
{
    Node *first;
};

typedef Node *address;

void createNode(List &L);

#endif // LIST_H_INCLUDED
