#include <iostream>

using namespace std;
class printData
{
    public:
        void print(int i)
        {
            cout << "Printing float: " << i << endl;
        }

        void print(double f)
        {
            cout << "Printing float: " << f << endl;
        }

        void print(char* c)
        {
            cout << "Printing character: " << c << endl;
        }
};

int main(void)
{
    printData pd;

    pd.print(5);

    pd.print(5.5);

    pd.print("c");

    return 0;
}