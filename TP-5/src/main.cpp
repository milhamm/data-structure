#include <iostream>
#include "cdll.h"

using namespace std;

int main()
{
    List L;
    address P;

    createList(L);

    createNewElement('a', P);
    insertFirst(L, P);

    createNewElement('t', P);
    insertFirst(L, P);

    createNewElement('t', P);
    insertAfter(findElement(L, 'a'), P);

    createNewElement('c', P);
    insertAfter(findElement(L, 't'), P);

    createNewElement('a', P);
    insertAfter(prev(first(L)), P);

    createNewElement('s', P);
    insertAfter(prev(first(L)), P);

    createNewElement('c', P);
    insertAfter(prev(first(L)), P);

    createNewElement('a', P);
    insertAfter(prev(first(L)), P);

    printInfo(L);

    char data[] = "cat";

    cout << countWord(data, L) << endl;
}