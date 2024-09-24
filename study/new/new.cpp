#include <iostream>
using namespace std;

int main(void)
{
    int *a = new int(20);
    cout << "a = " << *a << endl;
    delete a;
    int * b = new int[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = i;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "  " << b[i] << endl;
    }
    delete b;
    return 0;
}
