#include <iostream>
#include "string.h"
using namespace std;

/*thisָ��ĵ�һ������-�����������ͻ
*/
class class_A{

public :
    void Set_value(int value){
        this->value = value;
    }
    int value;

};
//�ֻ�������һ�����õı�̹淶�������Աǰ�Ӹ�m_ǰ׺
class class_B{

public :
    void Set_value(int value){
        m_value = value;
    }
    int m_value;

};
/*thisָ��ĵڶ������ã����ص��ú����Ķ�����
1.this��ָ������ָ�룬��*this���Ƿ��ض�����
2.��������һ��Ҫ��&���ã��������ֵ����
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
    cout << "����ֵ== " <<c.m_value<<endl;
    c.Add_value(10).Add_value(10).Add_value(10);
    cout << "����ֵ== " <<c.m_value<<endl;
    system("pause");
    
    return 0;
}