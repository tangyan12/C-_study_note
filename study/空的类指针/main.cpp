#include <iostream>
#include "string.h"
using namespace std;

class class_A{

public :
    void showMessage(void){
        cout << "��ʾһЩ��Ϣ"<<endl;
    }
    //���������ʹ�õ����Աǰ��Ĭ����һ��thisָ�룬��m_message == this->m_message
    //��������ǿ�ָ����ã���ô���Ҫ���ʳ�Ա��������thisָ��ָ���ģ��������ַ�ʽ�Ǵ��
    //�����յ���ָ��ȥ�����ຯ����Ļ������������
    //������ڿ����ɼ������Ҷ�thisָ������
    int showMessage_value(void){
        cout << "messageֵ��  " <<m_message<<endl;
        return m_message; 
    }
    int m_message;
};

int main(void)
{
    class_A* A = NULL;//�յ���ָ��
    //��ָ��������Ա��Ȼ�ǲ��еģ���Ա�ڴ�ռ䶼û����
    A->m_message = 2;//����
    //�յ���ָ����ú����ǿ��Եģ��ҹ��Ƴ�Ա�����ڱ���ʱ��ȷ����λ�ã��������������û�е������Ա
    A->showMessage();
    A->showMessage_value();//����




    system("pause");
    
    return 0;
}