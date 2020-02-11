#include <iostream>
#if !defined(LIST_H_DEFINED)
#define LIST_H_DEFINED

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    infotype info;
    address next;
};

struct List
{
    address first;
};

void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);
void deleteFirst(List &L, address &P);
void insertLast(List &L, address P);
void mergeListA(List L1, List L2, List &L3);
void mergeListB(List L1, List L2, List &L3);
void mergeListC(List L1, List L2, List &L3);
#endif // LIST_H_DEFINED
