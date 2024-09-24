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
    cout << "�ն���Ĵ�С��  " <<sizeof(a) << endl;
    cout << "����Ĵ�С��  " <<sizeof(class_A) << endl;
    cout << "����һ��int���ͳ�Ա�����Ĵ�С��  " <<sizeof(b) << endl;
    cout << "����һ��int���ͳ�Ա����Ĵ�С��  " <<sizeof(class_B) << endl;
    cout << "����һ��int��static int���ͳ�Ա�����Ĵ�С��  " <<sizeof(c) << endl;
    cout << "����һ��int��static int���ͳ�Ա����Ĵ�С��  " <<sizeof(class_C) << endl;
    cout << "����һ��int��static int���ͳ�Ա�ͷǾ�̬���������Ĵ�С��  " <<sizeof(d) << endl;
    cout << "����һ��int��static int���ͳ�Ա�ͷǾ�̬��������Ĵ�С��  " <<sizeof(class_D) << endl;
    cout << "����һ��int��static int���ͳ�Ա�;�̬���������Ĵ�С��  " <<sizeof(e) << endl;
    cout << "����һ��int��static int���ͳ�Ա�;�̬��������Ĵ�С��  " <<sizeof(class_E) << endl;

    /*����
    1.�����С��Ϊ0��Ϊ1��Ϊ�˼�¼��ͬ�������
    2.ֻ�зǾ�̬��Ա������������Ĵ�С
    3.��̬��Ա�����ͳ�Ա�������Ƿֿ��洢����ռ����ռ�
    */
    system("pause");
    
    return 0;
}