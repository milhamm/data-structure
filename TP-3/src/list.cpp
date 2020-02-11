/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

#include <iostream>
#include "list.h"

void createList(List &L)
{
    first(L) = NULL;
    last(L) = NULL;
}

bool emptyList(List L)
{
    return first(L) == NULL & last(L) == NULL;
}

address findElement(List L, string x)
{
    address P = first(L);
    bool found = false;

    while (P != NULL && !found)
    {
        found = info(P).publisher == x;
        if (!found)
        {
            P = next(P);
        }
    }

    return P;
}

void makeElement(address &P, string ID, string title, string author, string publisher, int year)
{
    P = new elmlist;

    info(P).ID = ID;
    info(P).title = title;
    info(P).author = author;
    info(P).publisher = publisher;
    info(P).year = year;

    next(P) = NULL;
}

void addLastData(List &L, address P)
{
    if (emptyList(L))
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        address temp = last(L);
        last(L) = P;
        next(temp) = P;
    }
}

void addDataAfter(List &L, address Prec, address P)
{
    if (Prec != NULL)
    {
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteLastData(List &L, address P)
{
    P = first(L);
    while (next(next(P)) != NULL)
    {
        P = next(P);
    }

    last(L) = P;
    next(P) = NULL;
}

void showList(List L)
{
    address P = first(L);
    while (P != NULL)
    {
        cout << info(P).ID << "    " << info(P).title << "     " << info(P).author << endl;
        P = next(P);
    }
}

int numOfBooks(List L, int year)
{
    int numBooks = 0;

    address P = first(L);
    while (P != last(L))
    {
        if (year > info(P).year)
        {
            numBooks++;
        }
        P = next(P);
    }

    return numBooks;
}