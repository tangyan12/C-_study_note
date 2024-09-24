#include <iostream>
#include "string.h"
using namespace std;

class class_A{

public :
    class_A(){
        m_value = 1;
        m_num = 1;
    }
    //常函数
    //常函数的定义是在函数后面加一个const修饰符
    //作用是不允许常函数修改类成员变量(除了mutable修饰的)
    //理解：
    //this指针的本质是一个指针常量，即class_A *const this;
    //函数后面加一个const，就变成了const class_A*const this;
    //即this是一个常量了而这些类成员前面都默认加了一个this，自然不能修改
    void Set_value(int value) const{
        //this->m_value = value;错误的
        m_num += 10;//mutable修饰的成员变量就可以修改
        //Set_value_2();看来投机取巧也不行
    }
    int Ret_value(void) /*const*/{//这个const加不加都可以，看来常函数的限制只是不能修改
        return m_value;
    }
    void Set_value_2(void){
        m_value = 20;
    }
    int m_value;
    mutable int m_num;
};

int main(void)
{
    //常对象，常对象起码需要用户自定义一个默认构造函数
    //常对象即类成员(非mutable修饰)不可以被改变
    //且只能访问常函数，因为其他的函数可以正常调用类成员嘛
    const class_A A;
    //A.m_value = 10;错误
    A.m_num = 10;
    A.Set_value(1);


    system("pause");
    
    return 0;
}