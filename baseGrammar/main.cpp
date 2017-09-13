#include <iostream>

using namespace std; // 命名空间

typedef double array[10]; //不能直接定义对数据的引用，通过typedef 来实现
int result(int, int);
void arrayOperate();
void constPoint();
const int k = 2;

struct Point{
    int x,y;
};
int main()
{
    //arrayOperate();
    constPoint();
    return 0;
}

void baseGrammar() {
    int z(0), b(50);
    Point a;
    cout <<"请输入两个整数以空格区分：";
    cin >>a.x>>a.y;
    z = (a.x + a.y) * k;
    z = result(z, b);
    cout << "计算结果如下"<<endl;
    cout <<"((" << a.x << "+" << a.y << ")*" << k << ")+" << b << "=" <<z << endl;
}

int result(int a, int b) {
    return a + b;
};

/*引用*/
void arrayOperate() {
    array a = {4, 32, 54};
    array &b = a;  //引用 （需要区别 引用和指针）
    a[2] = 100;  //操作数组a

    for(int i = 0; i < 3; i ++) {  //数组a,b同是变化
        cout << b[i] << "";
    }
}

/*常量指针*/
void constPoint() {

    /*指向常量的指针*/
    const int y = 5843434444;
    const int * p = &y;
    int x = 45;
    p = &x; //z成立 可以修改指针地址，但是不可以修改值
    cout << p <<endl;

    /*常量指针*/
    int a = 5;
    int * const b = &a; //常量指针，这个值在指针的生存期不会改变，但是地址内容可以用*b =  来改变
    *b = 100; //可以修改实际值 但是不是可以修改地址
    cout << *b;

    /*指向常量的常量指针*/
    int c = 2;
    const int * const d = &c;// d 和 *d 都不能作为左值 必须初始化指针
}
