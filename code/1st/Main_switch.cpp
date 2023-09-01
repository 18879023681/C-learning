#include <iostream>

using namespace std;
int main()
{
    int a = 1;

    switch (a)
    {
    case 1/* constant-expression */: cout << "a = 1" << endl;
        /* code */
        break;
    case 2 : cout << "a = 2" << endl;
        break;
    default:
        break;
    }

    return 0;
}