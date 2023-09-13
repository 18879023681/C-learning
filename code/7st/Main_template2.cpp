#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>class Stack
{
    private:
        vector<T> elems;    // 元素

    public:
        void push(T const&);    // 入栈
        T top() const;          // 返回栈元素
        bool empty() const      // 如果为空则返回真
        {
            return elems.empty();
        }
};

