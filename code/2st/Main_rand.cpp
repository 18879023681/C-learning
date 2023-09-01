#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int i, j;

    // 设置种子
    srand((unsigned)1);// time(NULL) 获取系统时间，单位为秒

    // 生成 10 个随机数
    for ( i = 0; i < 1; i++)
    {
        /* 生成实际的随机数 */
        j = rand();
        cout << "随机数：" << j << endl;

    }
    
    return 0;
}