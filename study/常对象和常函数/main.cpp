#include <iostream>
#include "string.h"
using namespace std;

class class_A{

public :
    class_A(){
        m_value = 1;
        m_num = 1;
    }
    //������
    //�������Ķ������ں��������һ��const���η�
    //�����ǲ����������޸����Ա����(����mutable���ε�)
    //��⣺
    //thisָ��ı�����һ��ָ�볣������class_A *const this;
    //���������һ��const���ͱ����const class_A*const this;
    //��this��һ�������˶���Щ���Աǰ�涼Ĭ�ϼ���һ��this����Ȼ�����޸�
    void Set_value(int value) const{
        //this->m_value = value;�����
        m_num += 10;//mutable���εĳ�Ա�����Ϳ����޸�
        //Set_value_2();����Ͷ��ȡ��Ҳ����
    }
    int Ret_value(void) /*const*/{//���const�Ӳ��Ӷ����ԣ�����������������ֻ�ǲ����޸�
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
    //�����󣬳�����������Ҫ�û��Զ���һ��Ĭ�Ϲ��캯��
    //���������Ա(��mutable����)�����Ա��ı�
    //��ֻ�ܷ��ʳ���������Ϊ�����ĺ������������������Ա��
    const class_A A;
    //A.m_value = 10;����
    A.m_num = 10;
    A.Set_value(1);


    system("pause");
    
    return 0;
}