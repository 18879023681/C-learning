#include <iostream>

using namespace std;
int main()
{
    char str[] = "Hello C++";
    string strs = "Hello C++ string";

    cout << "Value of str is : " << str <<endl;
    cout << "Value of strs is : " << strs <<endl;




    char str_err[] = "Unable to read......";

    cerr << "Error message : " << str_err <<endl; 



    char str_log[] = "Unable to read......";

    clog << "Error message : " << str_log <<endl; 


    char name[50];
    cout << "请输入您的名称：";
    cin >> name;
    cout << "您的名字是：" << name << endl;

    return 0;
}