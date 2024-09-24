#include <iostream>
#include "string.h"
using namespace std;

class class_A{

public :
    void showMessage(void){
        cout << "显示一些信息"<<endl;
    }
    //这个函数所使用的类成员前面默认有一个this指针，即m_message == this->m_message
    //所以如果是空指针调用，那么如果要访问成员变量，那this指针指向哪？所以这种方式是错的
    //不过空的类指针去调用类函数真的会有这种情况吗
    //但是这节课无疑加深了我对this指针的理解
    int showMessage_value(void){
        cout << "message值是  " <<m_message<<endl;
        return m_message; 
    }
    int m_message;
};

int main(void)
{
    class_A* A = NULL;//空的类指针
    //空指针调用类成员当然是不行的，成员内存空间都没生成
    A->m_message = 2;//错误
    //空的类指针调用函数是可以的，我估计成员函数在编译时就确定了位置，而且这个函数里没有调用类成员
    A->showMessage();
    A->showMessage_value();//错误




    system("pause");
    
    return 0;
}