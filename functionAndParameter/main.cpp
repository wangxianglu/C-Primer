#include <iostream>
#include <complex>
#include <string>
using namespace std;
/*
    函数的参数及其传递形式
    对象参数
    对象指针参数
    引用参数
*/
//对象传递
void objectParameter(string name);
//指针传递方式，数组名就是指针名
void PointParameter(string *name);
//引用传递
void referenceParameter(string &name);

template <class T> //定义类模板T
void printComplexNumber(complex<T> a);

int main()
{
    //string name = "helloword";
    //objectParameter(name);
    //referenceParameter(name);
    //cout << name << endl;
    complex<int> a(2,3);
    printComplexNumber(a);
    return 0;
}

template <class T> //定义类模板T
void printComplexNumber(complex<T> a) {
    cout<< a.real() << endl;
    cout<< a.imag() << endl;
}

void objectParameter(string name) {
    name = "test";
}

void PointParameter(string *name) {
    *name = "test";
}

void referenceParameter(string &name) { //string 类的引用对象

    name = "reference";
}
