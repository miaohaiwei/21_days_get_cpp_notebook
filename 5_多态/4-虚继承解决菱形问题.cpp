//
// Created by mhw on 18-12-9.
//
/*菱形问题是指 某个的多个父类都是来自同一个基类，那么最上层基类会被创建多次
 * */

#include <iostream>
using namespace std;

class Base
{
public:
    int a = 0;
    Base()
    {
        cout << "BASE的构造函数" << endl;
    }
};

class Drived_1:public virtual Base// 这里如果发生菱形问题只会建立一个基类
{public:
    Drived_1()
    {
        cout << "Derived_1的构造函数" << endl;
    }
};

class Drived_2:public virtual Base
{public:
    Drived_2()
    {
        cout << "Derived_2的构造函数" << endl;
    }
};

class Drived_3:public virtual Base
{public:
    Drived_3()
    {
        cout << "Derived_3的构造函数" << endl;
    }
};

//这里使用final 避免再次发生继承 产生菱形问题
class zuixiaolei final: public Drived_1,public Drived_2,public Drived_3
{
public:
    zuixiaolei()
    {
        cout << "最小类的构造函数" << endl;
    }
};

int main()
{
    zuixiaolei *  p = new zuixiaolei();
    cout << p->a << endl;

}
