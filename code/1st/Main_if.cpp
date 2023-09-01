#include <iostream>

using namespace std;
int func(int);
int main()
{
    int a;
    int f = func(a);
    if (f > 5)
    {
        cout << "f > 5" <<endl;
    }else{
        cout << "f <= 5" << endl;
    }

    return 0;
}

int func(int x)
{
    x = 6;
    
    return x;
}