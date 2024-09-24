#include <iostream>
#include "string.h"
using namespace std;

//类的声明
class Building;

class goodfriend{
public:
    //类成员函数(构造函数、普通函数还可以在外部定义，内部声明，我个人不太喜欢这方方式)
    goodfriend();
    void visit();
    Building * building;
};

class Building{
    //友元全局函数的声明，在函数名前面加一个friend，就可使该函数访问该类的private权限
    //void friend visit(Building &A);
    //对象类做友元，可以让友元类访问本类的private权限成员(如果有设置本类为成员)
    friend class goodfriend;
public :
    string m_slittrome;
    
    Building(){
        m_slittrome = "客厅";
        m_bedroom = "卧室";
    }
private :
    string m_bedroom;
};

//类成员函数的外部定义
goodfriend::goodfriend()
{
    building = new Building();
}
void goodfriend::visit(void)
{
    cout << "好朋友可以访问  "<<building->m_slittrome<<endl;
    cout << "好朋友可以访问  "<<building->m_bedroom<<endl; 
}
//第一个实验，全局函数做友元
#if 0
void visit(Building &A)
{
    cout << "我可以访问Building类的  " <<A.m_slittrome << endl;
    cout << "我可以访问Building类的  " <<A.m_bedroom << endl;
}
#endif
int main(void)
{
    #if 0

    #endif
    goodfriend tangyan;
    tangyan.visit();


    system("pause");
    
    return 0;
}