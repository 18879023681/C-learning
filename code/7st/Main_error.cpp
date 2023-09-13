using namespace std;

double division(int, int);
int main()
{
    int a, b;
    double cunt = 0;
    a = 10;
    b = 0;

    // double division;
    // cunt = division(a, b);
    cunt = division(a, b);
    return 0;
}

double division(int x, int y)
{
    if (y == 0)
    {
        throw "Division by 0 condition!";
    }
    return x/y;
}