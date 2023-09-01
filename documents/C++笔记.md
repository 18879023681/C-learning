# C++ 笔记



## C++ 杂项运算符

| 运算符               | 描述                                                         |
| :------------------- | :----------------------------------------------------------- |
| sizeof               | [sizeof 运算符](https://edu.aliyun.com/cplusplus/cpp-sizeof-operator.html)返回变量的大小。例如，sizeof(a) 将返回 4，其中 a 是整数。 |
| Condition ? X : Y    | [条件运算符](https://edu.aliyun.com/cplusplus/cpp-conditional-operator.html)。如果 Condition 为真 ? 则值为 X : 否则值为 Y。 |
| ,                    | [逗号运算符](https://edu.aliyun.com/cplusplus/cpp-comma-operator.html)会顺序执行一系列运算。整个逗号表达式的值是以逗号分隔的列表中的最后一个表达式的值。 |
| .（点）和 ->（箭头） | [成员运算符](https://edu.aliyun.com/cplusplus/cpp-member-operators.html)用于引用类、结构和共用体的成员。 |
| Cast                 | [强制转换运算符](https://edu.aliyun.com/cplusplus/cpp-casting-operators.html)把一种数据类型转换为另一种数据类型。例如，int(2.2000) 将返回 2。 |
| &                    | [指针运算符 &](https://edu.aliyun.com/cplusplus/cpp-pointer-operators.html) 返回变量的地址。例如 &a; 将给出变量的实际地址。 |
| *                    | [指针运算符 *](https://edu.aliyun.com/cplusplus/cpp-pointer-operators.html) 指向一个变量。例如，*var; 将指向变量 var。 |





## C++ 函数



### 函数声明与调用

函数是一组一起执行一个任务的语句。每个 C++ 程序都至少有一个函数，即主函数 **main()** ，所有简单的程序都可以定义其他额外的函数。也叫方法、程序等。

函数**声明**告诉编译器函数的名称、返回类型和参数。函数**定义**提供了函数的实际主体。

```c++
#include <iostream>

using namespace std;

// 向前声明func()，后续定义
// 这里做的全局声明，在函数内做局部声明也是可以的
int func(int x, int y);

int main()
{
    int a, b;
    a = 10;
    b = 20;
	
    // 声明一个int类型f，并调用func()
    int f = func(a, b);

    std::cout << "func() value = ";
    std::cout << f << std::endl;
    
    return 0;// return只做后台返回，不做打印，不要搞混。
}

// 向后定义func
int func(int x, int y)
{
    int z = 0;
    z = x * y;
    
    return z;
}
```



### 函数参数

| 调用类型                                                     | 描述                                                         |
| :----------------------------------------------------------- | :----------------------------------------------------------- |
| [传值调用](https://edu.aliyun.com/cplusplus/cpp-function-call-by-value.html) | 该方法把参数的实际值复制给函数的形式参数。在这种情况下，修改函数内的形式参数对实际参数没有影响。 |
| [指针调用](https://edu.aliyun.com/cplusplus/cpp-function-call-by-pointer.html) | 该方法把参数的地址复制给形式参数。在函数内，该地址用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。 |
| [引用调用](https://edu.aliyun.com/cplusplus/cpp-function-call-by-reference.html) | 该方法把参数的引用复制给形式参数。在函数内，该引用用于访问调用中要用到的实际参数。这意味着，修改形式参数会影响实际参数。 |