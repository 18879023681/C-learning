#include <iostream>
#include <cstring>

using namespace std;
struct Books{
    char title[50]; char author[50]; char subject[100]; int book_id;
};
// printBook(&book1)传的是地址而非值，因此形参也应是Books结构的地址。
void printBook(Books*);
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

    printBook(&book1);
    printBook(&book2);

    return 0;    
}

void printBook(Books *book)
{
    cout << book->title << "    " << book->author << "    " << book->subject << "    " << book->book_id << endl;
}