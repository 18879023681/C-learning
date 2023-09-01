#include <iostream>

using namespace std;
class Box
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};

class PeperBox: public Box
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

int main()
{
    PeperBox Pb;
    Pb.setWidth(10);
    Pb.setHeight(20);
    
    cout << "Total area : " << Pb.getArea() << endl;

    return 0;
}