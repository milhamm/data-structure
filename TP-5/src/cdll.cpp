#include <iostream>
#include "cdll.h"

using namespace std;

bool isEmpty(List L)
{
    return first(L) == NULL;
}

void createList(List &L)
{
    first(L) = NULL;
}

void createNewElement(infotype X, address &P)
{
    P = new elmlist;

    info(P) = X;
    next(P) = P;
    prev(P) = P;
}

void insertFirst(List &L, address P)
{
    if (isEmpty(L))
    {
        first(L) = P;
    }
    else
    {
        address last = prev(first(L));

        prev(first(L)) = P;
        next(P) = first(L);
        first(L) = P;
        prev(P) = last;
        next(last) = first(L);
    }
}

void insertAfter(address Prec, address P)
{

    next(P) = next(Prec);
    prev(P) = Prec;
    prev(next(Prec)) = P;
    next(Prec) = P;
}

void deleteFirst(List &L, address &P)
{
    address last = prev(first(L));
    next(last) = next(first(L));
    prev(next(first(L))) = prev(first(L));
    first(L) = next(first(L));
}

void deleteAfter(address Prec, address &P)
{
    next(Prec) = next(next(Prec));
    prev(next(next(Prec))) = Prec;
}

int countWord(char data[], List L)
{
    int count = 0;
    address P = first(L);
    do
    {
        address Q = P;
        int i = 0;
        bool isSame = true;
        while (data[i] && isSame)
        {
            isSame &= info(Q) == data[i];
            Q = next(Q);
            i++;
        }

        P = next(P);

        isSame ? count++ : count;

    } while (P != first(L));

    return count;
}

address findElement(List L, infotype X)
{

    address P = first(L);
    bool found = false;

    if (info(P) == X)
    {
        return P;
    }
    else
    {
        do
        {
            found = info(next(P)) == X;
            P = next(P);
        } while (!found && P != first(L));
    }

    return P;
}

void printInfo(List L)
{
    address P = first(L);

    do
    {
        cout << info(P) << " ";
        P = next(P);

    } while (P != first(L));

    cout << endl;
}