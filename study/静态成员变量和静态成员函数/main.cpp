#include <iostream>
#include "string.h"
using namespace std;

/*静态成员变量和静态成员函数*/
/*静态成员变量的特点
1.同一个类的所有对象共用一个变量
2.在编译时内存就已经确定分配了
3.类内声明，类外初始化 
(静态成员变量同样可以配置不同权限，跟普通成员变量的权限并无不同)
*/
/*静态成员函数的特点
1.同一个类所有对象共用一个静态函数(感觉非静态成员函数也是一样吧)
2.静态函数仅能使用静态成员变量,非静态成员变量无法使用(只是讨论类成员)
//原因是所有对象都可以操作该函数，如果在里面操作一个非静态变量不知道是操作哪个对象的
3.同样支持权限配置
(这个到不需要类内声明，类外初始化(一个函数初始化什么))
*/
class word{
public:
    int Ret_C(void){
        return e_C;
    }
    static int e_A;//类内声明
    int i_B;
private:
    static int e_C;
};

int word::e_A = 10;//类外初始化
int word::e_C = 20;

int main(void)
{
    word A;
    word B;
    /*
    静态成员变量/静态成员函数的调用方法有两种
    1.正常的.号调用
    2.类名::(变量/函数)-这样方法不支持非静态，因为不知道调用的是哪个
    */
    cout << "A中的静态成员变量的值  " << A.e_A << endl;
    B.e_A += 10;
    cout << "A中的静态成员变量e_A的值  " << word::e_A << endl;
    cout << "A中的静态成员变量C的值  " << A.Ret_C() << endl;
    
    system("pause");
    
    return 0;
}