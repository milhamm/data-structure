#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L)
{
    first(L) = NULL;
}

address allocate(infotype x)
{
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void insertFirst(List &L, address P)
{
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L)
{
    address p = first(L);
    while (p != NULL)
    {
        cout << info(p) << ", ";
        p = next(p);
    }

    cout << endl;
}

void deleteFirst(List &L, address &P)
{
    if (first(L) != NULL)
    {
        P = first(L);
        first(L) = next(P);
        next(P) = NULL;
    }
}

void insertLast(List &L, address P)
{
    if (first(L) == NULL)
    {
        insertFirst(L, P);
    }
    else
    {

        address R = first(L);
        while (next(R) != NULL)
        {
            R = next(R);
        }

        next(R) = P;
    }
}

void mergeListA(List L1, List L2, List &L3)
{
    createList(L3);
    address P1 = first(L1);
    address P2 = first(L2);
    address newElm;

    while (P1 != NULL && P2 != NULL)
    {
        if (info(P1) < info(P2))
        {
            newElm = allocate(info(P1));
            insertLast(L3, newElm);
            P1 = next(P1);
        }
        else if (info(P1) == info(P2))
        {
            newElm = allocate(info(P1));
            insertLast(L3, newElm);
            P1 = next(P1);
            P2 = next(P2);
        }
        else
        {
            newElm = allocate(info(P2));
            insertLast(L3, newElm);
            P2 = next(P2);
        }
    }

    while (P2 != NULL)
    {
        newElm = allocate(info(P2));
        insertLast(L3, newElm);
        P2 = next(P2);
    }

    while (P1 != NULL)
    {
        newElm = allocate(info(P1));
        insertLast(L3, newElm);
        P1 = next(P1);
    }
}

void mergeListB(List L1, List L2, List &L3)
{
    createList(L3);
    address P1 = first(L1);
    address P2 = first(L2);
    address newElm;

    while (P1 != NULL && P2 != NULL)
    {
        if (info(P1) < info(P2))
        {
            newElm = allocate(info(P1));
            insertFirst(L3, newElm);
            P1 = next(P1);
        }
        else if (info(P1) == info(P2))
        {
            newElm = allocate(info(P1));
            insertFirst(L3, newElm);
            P1 = next(P1);
            P2 = next(P2);
        }
        else
        {
            newElm = allocate(info(P2));
            insertFirst(L3, newElm);
            P2 = next(P2);
        }
    }

    while (P2 != NULL)
    {
        newElm = allocate(info(P2));
        insertFirst(L3, newElm);
        P2 = next(P2);
    }

    while (P1 != NULL)
    {
        newElm = allocate(info(P1));
        insertFirst(L3, newElm);
        P1 = next(P1);
    }
}

void mergeListC(List L1, List L2, List &L3)
{
    createList(L3);
    address P1 = first(L1);
    address P2 = first(L2);
    address newElm;

    while (P1 != NULL && P2 != NULL)
    {
        if (info(P1) < info(P2))
        {
            P1 = next(P1);
        }
        else if (info(P1) == info(P2))
        {
            newElm = allocate(info(P1));
            insertFirst(L3, newElm);
            P1 = next(P1);
            P2 = next(P2);
        }
        else
        {
            P2 = next(P2);
        }
    }

    while (P2 != NULL)
    {
        P2 = next(P2);
    }

    while (P1 != NULL)
    {
        P1 = next(P1);
    }
}