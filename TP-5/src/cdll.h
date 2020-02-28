#if !defined(CDLL_H_INCLUDED)
#define CDLL_H_INCLUDED

#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) L.first

typedef char infotype;
typedef struct elmlist *address;
struct elmlist
{
    infotype info;
    address prev;
    address next;
};

struct List
{
    address first;
};

bool isEmpty(List L);
void createList(List &L);
void createNewElement(infotype X, address &P);
void insertFirst(List &L, address P);
void insertAfter(address Prec, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(address Prec, address &P);

address findElement(List L, infotype X);
int countWord(char data[], List L);
void printInfo(List L);

#endif // CDLL_H_INCLUDED
