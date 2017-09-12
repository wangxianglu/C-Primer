#include <iostream>

using namespace std; // 命名空间

int result(int, int);
const int k = 2;

struct Point{
    int x,y;
};
int main()
{
    int z(0), b(50);
    Point a;
    cout <<"请输入两个整数以空格区分：";
    cin >>a.x>>a.y;
    z = (a.x + a.y) * k;
    z = result(z, b);
    cout << "计算结果如下"<<endl;
    cout <<"((" << a.x << "+" << a.y << ")*" << k << ")+" << b << "=" <<z << endl;
    return 0;
}

int result(int a, int b) {
    return a + b;
};
