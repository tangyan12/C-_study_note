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
    //friend class goodfriend; 
    //为了实现与上面将类作为友元从而得以访问私有权限成员同样的效果
    //可以将类成员函数作为友元
    //如此一来，这个类成员函数就可以访问Building类的私有权限成员
    friend void goodfriend::visit(void);
public :
    string m_slittrome;
    
    Building(){
        m_slittrome = "客厅";
        m_storehouse = "储藏室";
        m_bedroom = "卧室";
    }
protected:
    string m_storehouse ;
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
    cout << "好朋友可以访问  "<<building->m_storehouse<<endl;
    cout << "好朋友可以访问  "<<building->m_bedroom<<endl;  
}
//第一个实验，全局函数做友元

void global_visit(Building &A)
{
    cout << "我可以访问Building类的  " <<A.m_slittrome << endl;
    //cout << "我可以访问Building类的  " <<A.m_bedroom << endl;
    //cout << "我可以访问Building类的  " <<A.m_storehouse << endl;
}
int main(void)
{
    Building house;
    global_visit(house);


    goodfriend tangyan;
    tangyan.visit();


    system("pause");
    
    return 0;
}