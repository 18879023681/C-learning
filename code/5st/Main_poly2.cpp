#include <iostream>

using namespace std;

class Box
{
    protected:
        int tag;

    public:
        Box()
        {
            tag = 0;
            cout << "你调用的是基类函数：" << tag << endl;
        }

        int area(int t)
        {
            return t;
        }

};

class Box_1: public Box
{
    public:
        Box_1(): Box()
        {
            tag = 1;
            cout << "你调用的是派生类函数：" << tag <<endl;
        }

        int area(int t)
        {
            return t;
        }
};

class Box_2: public Box
{
    public:
        Box_2(): Box()
        {
            tag = 2;
            cout << "你调用的是派生类函数：" << tag << endl;
        }

        int area(int t)
        {
            return t;
        }
};

int main()
{
    Box box;
    Box_1 box_1;
    Box_2 box_2;

    return 0;
}