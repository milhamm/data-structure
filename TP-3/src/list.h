#if !defined(LIST_H_INCLUDED)
#define LIST_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info
#define last(L) L.last

using namespace std;

struct book
{
    string ID;
    string title;
    string author;
    string publisher;
    int year;
};

typedef struct elmlist *address;
typedef struct book infotype;

struct elmlist
{
    infotype info;
    address next;
};

struct List
{
    address first;
    address last;
};

void createList(List &L);
bool emptyList(List L);
address findElement(List L, string x);
void makeElement(address &P, string ID, string title, string author, string publisher, int year);
void addLastData(List &L, address P);
void addDataAfter(List &L, address Prec, address P);
void deleteLastData(List &L, address P);
void showList(List L);
int numOfBooks(List L, int year);

#endif // LIST_H_INCLUDED
