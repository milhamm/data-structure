#include "dll.h"

int main()
{

    List L1, L2, L3;

    createList(L1);
    createList(L2);
    createList(L3);

    address P;

    createNewElm(120, P);
    insertFirst(L1, P);

    createNewElm(100, P);
    insertFirst(L1, P);

    createNewElm(90, P);
    insertFirst(L1, P);

    createNewElm(80, P);
    insertFirst(L1, P);

    createNewElm(73, P);
    insertFirst(L1, P);

    // Create New ELm

    createNewElm(60, P);
    insertFirst(L2, P);

    createNewElm(50, P);
    insertFirst(L2, P);

    createNewElm(65, P);
    insertLast(L2, P);

    printInfo(L1);
    printInfo(L2);

    concat(L2, L1, L3);

    printInfo(L3);

    cout << median(L3) << endl;

    return 0;
}