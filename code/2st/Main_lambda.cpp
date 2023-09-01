#include <iostream>

using namespace std;
int main()
{
    auto plus = [](int v1, int v2) -> int{return v1 + v2;};
    int sum = plus(1, 2);
    double d;
    d = 30949.374;
    cout << "double d :" << d << endl;

    cout << sum << endl;

    return 0;

}