#include <iostream>

using namespace std;
int main()
{
    int var = 20;
    int *ip;

    ip = &var;

    cout << "var变量为：" << var << endl;
    cout << "ip访问var中的地址：" << ip << endl;
    cout << "*ip访问var中地址对应的值：" << *ip <<endl;
    cout << "&ip访问ip的地址：" << &ip << endl;
    cout << "&*ip访问var中的地址：" << &*ip << endl;

    return 0;
}