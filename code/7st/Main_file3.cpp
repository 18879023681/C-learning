#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // 建立存储数据的字符串
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("Main_file3.txt");

    // 获取用户写入的数据
    cout << "输入你想输入的内容：";
    cin.getline(data, 100);

    // 将临时存储的数据写入文件中
    outfile << data << endl;

    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("Main_file3.txt");

    // 将文件的内容暂存到data中
    infile >> data;

    // 将data中的数据打印到显示器
    cout << data << endl;

    // 关闭打开的文件
    infile.close();

    return 0;
}