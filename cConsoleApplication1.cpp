#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int* p = new int[100];
    int n = 0;

 
    for (int i = 0; i < 10; i++) {
        p[n] = rand() % 100;
        cout << p[n] << ' ';
        if (p[n] % 2)
            n++;
    }
    cout << '\n';
    for (int i = 0; i < n; i++)
        cout << p[i] << ' ';
    cout << '\n';
}