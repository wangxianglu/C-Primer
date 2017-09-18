#include <iostream>

using namespace std;

class object {
private:
    int val;
public:
    object():val(0)
    {
        cout << "default constructor for object" << endl;
    }
    object(int i):val(i)
    {
        cout << "Constructor for object" << endl;
    }
    ~object()
    {
        cout << "destructor for object" << endl;
    }
};

class container{
private:
    object one;
    object two;
    const int data;
public:
    container():data(0)
    {
        cout << "default constructor for container" << endl;
    }
    container(int i, int j, int k);
    ~container()
    {
        cout << "destructor for container" <<endl;
    }
};
container ::container(int i, int j, int k):one(i),two(j), data(k) //const成员 和引用 必须在成员初始化列表
{
    //data = k;
    cout << "constructor for container" << endl;
}

class test{
private:
    int n;
public:
    test(int i):n(i)
    {
        cout << "constructor" << endl;
    }
    ~test() {
        cout << "destructor" << n << endl;
    }
    int getn(){ return n;}
    int inc() { ++n;}
};

int main()
{
    //container obj, anObj(5,6,10);
    for(int i = 0; i < 3; i++) {
        static test a(3);
        test b(3);
        a.inc();
        b.inc();
        cout << "a value" << a.getn() << endl;
        cout << "b value" << b.getn() << endl;
    }
    return 0;
}
