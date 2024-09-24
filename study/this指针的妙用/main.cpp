#include <iostream>
#include "string.h"
using namespace std;

/*this指针的第一个作用-解决参数名冲突
*/
class class_A{

public :
    void Set_value(int value){
        this->value = value;
    }
    int value;

};
//又或者养成一个良好的编程规范，在类成员前加个m_前缀
class class_B{

public :
    void Set_value(int value){
        m_value = value;
    }
    int m_value;

};
/*this指针的第二个作用，返回调用函数的对象本身
1.this是指针对象的指针，则*this就是返回对象本身
2.返回类型一定要用&引用，否则就是值传递
*/
class class_C{

public :
    class_C& Add_value(int value){
        m_value += value;
        return *this;
    }
    int m_value;

};
int main(void)
{
    class_C c;
    c.m_value = 0;
    cout << "现在值== " <<c.m_value<<endl;
    c.Add_value(10).Add_value(10).Add_value(10);
    cout << "现在值== " <<c.m_value<<endl;
    system("pause");
    
    return 0;
}