#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];

    // 以写模式打开文件
    ofstream outfile;
    outfile.open("Main_file2.txt");

    // 将输入的信息利用函数 cin 输入字符串 data 中暂存
    cout << "向文件中写入信息：" << endl;
    cin.getline(data, 100);

    // 将data中的数据写入文件中
    outfile << data << endl;

    cout << "继续向文件中写入信息：" << endl;
    // ">>" 写入与 getline() 写入的差异在于：
    //                    ">>" 写入遇空格自动结束写入过程
    //                    getline() 写入则可一直进行
    cin >> data;
    cin.ignore();

    outfile << data << endl;



    // 关闭打开的文件
    outfile.close();

    // 以读模式打开文件
    ifstream infile;
    infile.open("Main_file2.txt");

    cout << "读取文件信息：" << endl;
    infile >> data;

    // 在屏幕上写入数据
    cout << data << endl;

    // 再次从文件读取数据，并显示它
    infile >> data;
    cout << data << endl;

    // 关闭打开的文件
    infile.close();

    return 0;
}