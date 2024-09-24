
/*请用GB2312格式打开*/
#include <iostream>
#include "string.h"
using namespace std;


//构造函数调用规则
//规则1.C++编译器会自动创建无参构造函数、拷贝构造函数、析构函数
//规则2.如果自己创建了有参构造函数，则编译器只会帮忙创建拷贝构造函数(析构函数这里不讨论)
//规则3.如果自己创建了拷贝构造函数，则编译器不会帮忙创建任何构造函数
class person{
public:
    void Set_name(const char *yourname){
        strcpy(name,yourname);
    }
    const char* Ret_name(void){
        return name;
    }
    int Ret_age(void){
        return age;
    }
    #if 1
    person(){
        age = 20;
        strcpy(name,"name");
        cout << "默认构造函数调用"<<endl;
    }
    #endif
    #if 1
    person(int yourage,const char *yourname = "name"){
        age = yourage;
        strcpy(name,yourname);
        cout << "有参构造函数调用" << endl;
    }
    #endif
    person(const person &someone){
        age = someone.age;
        //strcpy(name,someone.name);
        cout << "拷贝构造函数调用" << endl;
    }
    ~person(){
        /*do something*/
        cout  << "析构函数调用" << endl;

    }
private:
    int age;
    char name[10];

};
#if 1
void copy_test(person p)
{
    cout << "拷贝进来的年龄是  " << p.Ret_age() << endl;
    cout << "拷贝进来的名字是  " << p.Ret_name() << endl;
    p.Set_name("tangyan");
    cout << "拷贝进来更改后名字是  " << p.Ret_name() << endl;
}
#endif
#if 0
void copy_test(person &p)
{
    cout << "拷贝进来的年龄是  " << p.Ret_age() << endl;
    cout << "拷贝进来的名字是  " << p.Ret_name() << endl;
    p.Set_name("tangyan");
    cout << "拷贝进来更改后名字是  " << p.Ret_name() << endl;
}
#endif
int main(void)
{
    //规则1讨论，自己创建了有参构造，则下面这条语句会报错，因为这条语句是调用了默认构造可是
    //本人没提供、编译器也没提供
    //person p1;

    //规则3讨论，自己创建了拷贝构造函数，则编译器不会帮忙创建任何构造函数
    //person p1;
    //person p1(p1);

    //下面来探讨一下拷贝构造函数
    //1.改变传入函数的类型，值传递和引用传递
    //person p1;
    //copy_test(p1);
    //cout << "拷贝测试函数推出后名字是  " << p1.Ret_name() << endl;

    //2.改变拷贝构造函数的内容
    person p1(21,"tangyan");
    cout << "拷贝测试函数进入前,年龄21,名字tangyan" <<endl;
    copy_test(p1);
    //发现:原来值类的值传递并不是传递一模一样的(视构造函数而言),所以这就是引用的重要性吗

    system("pause");
    
    return 0;
}