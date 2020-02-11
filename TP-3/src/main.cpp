/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

#include <iostream>
#include "list.h"

int main()
{
    List L;

    address address, addressNew;
    createList(L);

    makeElement(address, "id01", "book1", "anna", "informatics", 2017);
    addLastData(L, address);
    makeElement(address, "id03", "book3", "cikita", "gramedia", 2018);
    addLastData(L, address);
    showList(L);

    cout << endl;

    address = findElement(L, "informatics");
    makeElement(addressNew, "id02", "book2", "bana", "informatics", 2018);
    addDataAfter(L, address, addressNew);
    showList(L);

    cout << endl;

    address = findElement(L, "publisher");
    makeElement(addressNew, "id02", "book5", "wafa", "informatics", 2018);
    addDataAfter(L, address, addressNew);
    showList(L);

    cout << endl;

    deleteLastData(L, address);
    showList(L);

    cout << endl;

    cout << "Number of books published before 2015 is " << numOfBooks(L, 2015) << endl;
    cout << "Number of books published before 2018 is " << numOfBooks(L, 2018) << endl;

    return 0;
}