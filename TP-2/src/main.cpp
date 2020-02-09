#include <iostream>
#include "list.h"

/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

int main()
{
    List L;

    createList(L);

    address P1;
    for (int i = 0; i < 3; i++)
    {
        infotype a;
        cin >> a;
        P1 = allocate(a);
        insertFirst(L, P1);
        printInfo(L);
    }

    deleteFirst(L, P1);
    printInfo(L);

    return 0;
}