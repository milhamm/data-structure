#include <bits/stdc++.h>
#include "list.h"

/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

int main()
{
    List L1;
    List L2;

    List L3;
    List L4;
    List L5;

    createList(L1);
    createList(L2);

    vector<int> angka1 = {60, 35, 22, 7};
    vector<int> angka2 = {29, 22, 1};

    for (int a1 : angka1)
    {
        address P1;
        infotype a = a1;
        P1 = allocate(a);
        insertFirst(L1, P1);
    }
    // printInfo(L1);

    for (int a2 : angka2)
    {
        address P2;
        infotype a = a2;
        P2 = allocate(a2);
        insertFirst(L2, P2);
    }

    // printInfo(L2);

    mergeListA(L1, L2, L3);
    mergeListB(L1, L2, L4);
    mergeListC(L1, L2, L5);

    printInfo(L3);
    printInfo(L4);
    printInfo(L5);

    return 0;
}