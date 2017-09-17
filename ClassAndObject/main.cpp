#include <iostream>

using namespace std;
/*
类和对象
*/
class Point{

private:
    int x,y;
public:
    void Setxy(int a, int b) {
        x = a;
        y = b;
    }

    void Display() {
        cout << x << "\t" << y << endl;
    }

    int getX() { return x;}
    int getY() {return y;}
    //Point();
    ~Point(); //析构函数 说明
};
//point 类的析构函数
Point:: ~Point() {
    cout << "destructor is active" << endl;
}


void print(Point *a) {
    a->Display();
}

void print(Point &a) {
    a.Display();
}
int main()
{
    Point a, b, *p;

    Point &RA = a;
    a.Setxy(25, 55);
    b=a;
    p = &b;
    p->Setxy(112, 115);
    print(p);
    p->Display();

    Point *ptr = new Point[2];
    delete ptr;

    return 0;
}
