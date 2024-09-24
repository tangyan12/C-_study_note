#include <iostream>
#include "string.h"
using namespace std;

//主要探讨浅拷贝和深拷贝,以及析构函数的作用
//浅拷贝一般是由编译器创建的，它只会机械复制属性的值，比如指针类型连地址都复制过去
//那么如果这个类成员是new出来的析构函数是释放内存空间就会出现问题，就是一个内存空间被重复释放
//深拷贝就是我们自己创建的，我们自己会申请内存，只复制内存中的值
//这也是我们第一次真正用到析构函数，负责释放申请的内存空间
class word{
public:
    void Set_words(const char *str){
        int str_len = strlen(str);
        if(str_len > len)
            str_len = len;
        strncpy(words,str,str_len);
    }
    const char *Ret_words(void){
        return words;
    }
    word(size_t length){
        len = length;
        words = new char[length];
        if(words == NULL){
            cout << "申请内存失败" << endl;
        }
        else
            memset(words,0,length);
    }

    word(const word& w){
        len = w.len;
        words = new char[len];
        if(words == NULL){
            cout<< "拷贝构造内存申请失败"<<endl;
        }
        else{
            for (int i = 0; i < len; i++)
            {
                words[i] = w.words[i];
            }
        }
    }

    ~word(){
        delete words;
        words = NULL;
    }

private:
    char *words;
    int len;
};
int main(void)
{
    word A(10);
    A.Set_words("install");
    cout << "为A设置的单词是  " <<A.Ret_words() <<endl;
    word B(A);
    cout << "B复制A的单词  " << B.Ret_words() << endl;
    system("pause");
    
    return 0;
}