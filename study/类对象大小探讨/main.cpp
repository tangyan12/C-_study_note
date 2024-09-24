#include <iostream>
#include "string.h"
using namespace std;

class class_A{

};

class class_B{
public:
    int m_value;
};

class class_C{
public:
    int m_value;
    static int sm_value;
};
int class_C::sm_value = 0;

class class_D{
public:
    int m_value;
    static int sm_value;
    void m_func(void){

    }

};
int class_D::sm_value = 0; 

class class_E{
public:
    int m_value;
    static int sm_value;
    static void m_func(void){        
    }

};
int class_E::sm_value = 0;

int main(void)
{
    class_A a;
    class_B b;
    class_C c;
    class_D d;
    class_E e;
    cout << "空对象的大小是  " <<sizeof(a) << endl;
    cout << "空类的大小是  " <<sizeof(class_A) << endl;
    cout << "定义一个int类型成员则对象的大小是  " <<sizeof(b) << endl;
    cout << "定义一个int类型成员则类的大小是  " <<sizeof(class_B) << endl;
    cout << "定义一个int和static int类型成员则对象的大小是  " <<sizeof(c) << endl;
    cout << "定义一个int和static int类型成员则类的大小是  " <<sizeof(class_C) << endl;
    cout << "定义一个int和static int类型成员和非静态函数则对象的大小是  " <<sizeof(d) << endl;
    cout << "定义一个int和static int类型成员和非静态函数则类的大小是  " <<sizeof(class_D) << endl;
    cout << "定义一个int和static int类型成员和静态函数则对象的大小是  " <<sizeof(e) << endl;
    cout << "定义一个int和static int类型成员和静态函数则类的大小是  " <<sizeof(class_E) << endl;

    /*结论
    1.空类大小不为0，为1，为了记录不同空类差异
    2.只有非静态成员变量会增加类的大小
    3.静态成员变量和成员函数都是分开存储，不占对象空间
    */
    system("pause");
    
    return 0;
}