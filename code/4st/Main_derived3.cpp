#include <iostream>

using namespace std;

// 基类Shape
class Shape {
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

//基类PaintCost
class PaintCost
{
    public:
        int getCost(int area)
        {
            return area * 70;
        }
};

//