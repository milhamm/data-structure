#include <iostream>
#include "dll.h"

using namespace std;

/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

bool isEmpty(List L)
{
    return first(L) == NULL || last(L) == NULL;
}

void createList(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

void createNewElm(infotype x, address &P)
{
    P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
}

void insertFirst(List &L, address P)
{
    if (isEmpty(L))
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        address temp = first(L);
        next(P) = first(L);
        prev(temp) = P;
        first(L) = P;
    }
}

void insertAfter(List &L, address &Prec, address &P)
{
    if (isEmpty(L))
    {
        insertFirst(L, P);
    }
    else
    {

        next(Prec) = P;
        prev(P) = Prec;
    }
}

void insertLast(List &L, address P)
{
    if (isEmpty(L))
    {
        insertFirst(L, P);
    }
    else
    {
        address temp = last(L);
        next(last(L)) = P;
        last(L) = P;
        prev(P) = temp;
    }
}

void deleteFirst(List &L, address &P)
{
    if (first(L) == last(L))
    {
        first(L) = NULL;
        last(L) = NULL;
    }
    else
    {
        address temp = first(L);
        first(L) = next(first(L));
        prev(temp) = first(L);
    }
}

void deleteAfter(List &L, address Prec, address &P)
{
    if (first(L) == last(L))
    {
        deleteFirst(L, P);
    }
    else
    {
        address temp = Prec;
        prev(next(Prec)) = Prec;
        next(Prec) = next(next(Prec));
    }
}

void deleteLast(List &L, address &P)
{
    last(L) = prev(last(L));
    next(last(L)) = NULL;
}

void concat(List L1, List L2, List &L3)
{
    L3 = L1;
    next(last(L3)) = first(L2);
    last(L3) = last(L2);
}

float median(List L)
{
    int count = 0;
    address P = first(L);

    while (P != NULL)
    {
        count++;
        P = next(P);
    }

    P = first(L);

    for (int i = 0; i < count / 2; i++)
        P = next(P);

    return count % 2 != 0 ? info(P) : (float(info(P)) + float(info(prev(P)))) / 2;
}

void printInfo(List L)
{
    address P = first(L);
    while (P != NULL)
    {
        cout << info(P) << " ";
        P = next(P);
    }
    cout << endl;
}