#include <iostream>

using namespace std;

/*结构体*/
struct Point {
    private:
         double x,y;
    public:
        void Setxy(double a, double b)
            {
                x = a, y = b;
            }
        void Display()
        {
            cout << x << "\t" << y << endl;
        }
};

/*定义类 */
class PointA {
    private:
        double a, b;
public:
    PointA(){} // 无参构造函数
    PointA(double x, double y)
    {
        a = x;
        b = y;
    }
    void coutContext() {
        cout << a << "\t" << b << endl;
    }
};

int main()
{
    Point point;
    point.Setxy(12.3, 34.2);
    point.Display();
    //cout << point.x << point.y << endl;
    PointA a(34.32, 32.34);
    a.coutContext();
    return 0;
}
