#include <iostream>
#if !defined(LIST_H_DEFINED)
#define LIST_H_DEFINED

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
    address prev;
};

struct List
{
    address first;
    address last;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElm(infotype x, address &P);
void insertFirst(List &L, address P);
void insertAfter(List &L, address &Prec, address &P);
void insertLast(List &L, address P);

void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);

void concat(List L1, List L2, List &L3);
float median(List L);

void printInfo(List L);
#endif // LIST_H_DEFINED
