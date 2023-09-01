#include <iostream>
#include <cstring>

using namespace std;
class Lang
{
    public:
        void setName(string n)
        {
            name = n;
        }
        void setaddr(string a)
        {
            addr = a;
        }
        void test_public()
        {
            cout << "派生类调用成功！"  << endl;
        }
    protected:
        string name;
        string addr;
        void test_protected()
        {
            cout << "派生类调用成功！"  << endl;
        }
    private:
        void test_private()
        {
            cout << "基类调用成功！" << endl;
        }
};

class English: public Lang
{
    public:
        void test_pd()
        {
            cout << "派生类调用基类的protected：";
            test_protected();
        }
        void test_pc()
        {
            cout << "派生类调用基类的public：";
            test_public();
        }
        // void test_pe()
        // {
        //     cout << "派生类调用基类的public：";
        //     test_private();
        // }

};

class Chinese: protected Lang
{
    public:
        void test_pc()
        {
            cout << "派生类调用基类的public：";
            test_public();
        }
};

class X: private Lang
{

};

int main()
{
    Lang lang;
    English english;
    Chinese chinese;
    X x;

    //lang.test_private();
    //lang.test_protected();    无法访问，只能内部调用。

    //english.test_protected(); 无法访问，public继承的protected在派生类中还是protected，没办法在外部访问
    english.test_pd(); //用English的public去调用基类的protected，再用main调用english的public，从而打印成功
    english.test_pc(); //用English的public去调用基类的public，再用main调用english的public，从而打印成功

    //chinese.test_public();    无法访问，chinese被protected修饰，继承的public和protected都转为protected，无法直接调用
    chinese.test_pc();



    return 0;

}