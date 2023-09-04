#include <iostream>

using namespace std;
class Box
{
    public:
        void setLength(int l)
        {
            length = l;
        }

        void setHight(int h)
        {
            hight = h;
        }

        int getVolume(void)
        {
            return length * hight;
        }

        Box operator * (const Flat& f)
        {
            Box box;
            box.length = this -> length * f.length;
            box.hight  = this -> hight * f.hight;

            return box;
        }

    private:
        int hight;
        int length;
};

class Flat
{
    public:
        void setLength(int l)
        {
            length = l;
        }

        void setHight(int h)
        {
            hight = h;
        }

        int length;
        int hight;
};

int main()
{
    Box box;
    Flat flat;
    Box boxMix;
    int volume;

    boxMix = box * flat;
    volume = boxMix.getVolume();
    cout << "Box * Flat : " << volume << endl;
}