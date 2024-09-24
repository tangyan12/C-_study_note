#include <iostream>
#include "string.h"
using namespace std;
//
void Order(const char *food,int rice_bwl=1,bool soup=true,bool stay=true)
{
    cout << "custom order " << food << endl;
    cout << "need rice bwl count is"<<rice_bwl << endl;
    if (soup == true)
    {
        cout << "customer need soup" << endl;
    }
    else
        cout << "customer no need soup" << endl;

    if (stay == true)
    {
        cout << "customer stay here to eat" << endl;
    }
    else
        cout << "customer pack to eat" << endl;

}

int main()
{
    cout << "T is ordering" << endl;
    Order("chicken",2);
    cout << "Y is ordering" << endl;
    Order("sweet fish",2,false,false);
    
    return 0;
}