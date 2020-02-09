/* 
     Name      : Muhammad Ilham Mubarak
     Class     : IF-43-INT
     SID       : 1301194276 
*/

#include "hello.h"

int main()
{
     cout << "Test Procedure Greeting" << endl;
     string name = "Muhammad Ilham Muabrak";
     string id = "1301194276";
     greetings(name, id);

     cout << "Please answer the question 1" << endl
          << endl;

     cout << "Test procedure swap_1 and swap_2" << endl;
     int a = 15;
     int b = 30;
     int c = 75;

     swap_1(a, b, c);

     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
     a = 15;
     b = 30;
     c = 75;

     swap_2(a, b, c);
     cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

     cout << "Please answer question 2 " << endl
          << endl;

     cout << "Test procedure confused " << endl;
     confused();

     cout << "Please answer question 3 " << endl;
     remove_inside(5);

     cout << "Please answer question 4 " << endl;

     cout << "Test procedure indexing " << endl;

     cout << "example 1 : " << indexing(70, 75, 60) << endl;
     cout << "example 2 : " << indexing(45, 70, 50) << endl;
     cout << "example 3 : " << indexing(75, 80, 82) << endl;

     cout << "Please answer question 4 " << endl;

     return 0;
}