#include <iostream>
#include <cstring>

using namespace std;
struct Books{
    char title[50]; char author[50]; char subject[100]; int book_id;
};

int main()
{
    Books book1;
    Books book2;

    strcpy(book1.title, "C++ 教程");
    strcpy(book1.author, "Runoob");
    strcpy(book1.subject, "编程语言");
    book1.book_id = 12345;

    strcpy(book2.title, "操作系统");
    strcpy(book2.author, "Runoob");
    strcpy(book2.subject, "计算机");
    book2.book_id = 23456;

    cout << book1.title << "    " << book1.author << "    " << book1.subject << "    " << book1.book_id << endl;
    cout << book2.title << "    " << book2.author << "    " << book2.subject << "    " << book2.book_id << endl;

    return 0;

}