#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> angka;

    for (int i = 0; i < 5; i++)
    {
        int umur;
        cin >> umur;
        angka.push(umur);
    }

    while (!angka.empty())
    {
        cout << angka.top() << endl;
        angka.pop();
    }

    return 0;
}
