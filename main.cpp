#include <iostream>
#include "string.h"
using namespace std;

//�������
class Building;

class goodfriend{
public:
    //���Ա����(���캯������ͨ�������������ⲿ���壬�ڲ��������Ҹ��˲�̫ϲ���ⷽ��ʽ)
    goodfriend();
    void visit();
    Building * building;
};

class Building{
    //��Ԫȫ�ֺ������������ں�����ǰ���һ��friend���Ϳ�ʹ�ú������ʸ����privateȨ��
    //void friend visit(Building &A);
    //����������Ԫ����������Ԫ����ʱ����privateȨ�޳�Ա(��������ñ���Ϊ��Ա)
    friend class goodfriend;
public :
    string m_slittrome;
    
    Building(){
        m_slittrome = "����";
        m_bedroom = "����";
    }
private :
    string m_bedroom;
};

//���Ա�������ⲿ����
goodfriend::goodfriend()
{
    building = new Building();
}
void goodfriend::visit(void)
{
    cout << "�����ѿ��Է���  "<<building->m_slittrome<<endl;
    cout << "�����ѿ��Է���  "<<building->m_bedroom<<endl; 
}
//��һ��ʵ�飬ȫ�ֺ�������Ԫ
#if 0
void visit(Building &A)
{
    cout << "�ҿ��Է���Building���  " <<A.m_slittrome << endl;
    cout << "�ҿ��Է���Building���  " <<A.m_bedroom << endl;
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