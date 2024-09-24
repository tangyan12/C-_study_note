#include <iostream>
using namespace std;
//引用当作形参
void func_add_10(int &value)
{
    value += 10;
}

int main()
{
    int signal = 0;
    int &y_signal = signal;// == int *const y_signal = &signal;
    const int &a_cosnt = 10;// const int *const a_const = 10; == const int a_cosnt = 10;

    while (1)
    {
        //引用作为形参，但是同时原名也可以当作参数传递，而且值也会被改变
        func_add_10(y_signal);//func_add_10(signal);
        //引用常量
        //signal += a_cosnt;
        cout << "signal value now is " << signal << endl;
        if (y_signal >30)
        {
            break;
        }
        
    }
    
    return 0;
}