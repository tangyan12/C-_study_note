#include <iostream>
#include "string.h"
using namespace std;

class person{
public:
    void Set_name(const char *yourname){
        strcpy(name,yourname);
    }
    const char* Ret_name(void){
        return name;
    }
    //构造函数按参数有无可分为无参构造(又叫默认构造)和有参构造
    //按类型可分为普通构造和拷贝构造
    person(){
        age = 20;
        strcpy(name,"name");
        cout << "name and age has inited"<<endl;
    }
    //有参构造，支持重载，参数支持初始化
    person(int yourage,const char *yourname = "name"){
        age = yourage;
        strcpy(name,yourname);
        cout << "your age " << age <<" has inited"<<endl;
        cout << "your name " << yourname <<" has inited"<<endl;
    }
    //这是拷贝构造函数，参数要求这么写
    //这个函数的运行环境是类内所以可以访问age/name属性
    person(const person &someone){
        age = someone.age;
        strcpy(name,someone.name);
        cout << "copy has finished" << endl;
    }
    ~person(){
        /*do something*/
        cout  << name << " has been deleted" << endl;

    }
private:
    int age;
    char name[10];

};

int main(void)
{
    //构造函数的调用
    //括号法,将括号内的参数传递给有参构造函数
    //*注意*括号法调用构造函数不能调用默认构造，因为这样会让编译器以为你在声明函数 

    //个人更喜欢使用括号法
    #if 1
    person tangyan(21,"tangyan");
    person tangyan_copy(tangyan);
    #endif
    //显示法
    #if 0
    person  yuyong = person();
    person tangyan = person(21,"tangyan");
    person tangyan_copy = person(tangyan);
    #endif
    //隐式转换法
    #if 0
    person tangyan(21,"tangyan");
    person tangyan_copy2 = tangyan;
    #endif
    

    system("pause");
    
    return 0;
}