//
// Created by mhw on 18-12-6.
//

#include <iostream>

using namespace std;

class Base
{
private:
    int a = 0;
public:
    Base(int a)
    {
        this->a = a;
    }

    void swim()
    {
        if(a!=0)
        {
            cout << "base class :swim" << endl;
        }
        else{
            cout << "base class :淹死了" << endl;
        }
    }
    void swim(int a)
    {
        cout << "这是基类带参方法" << endl;
    }
};

class Derived_1 : public Base
{
public:
    // 向基类传递参数
    Derived_1():Base(1){}

    void swim(){
        cout << "derived_1 class function" << endl;
    }

};
class Derived_2 : public Base
{
public:
    Derived_2():Base(0){}
    void swim(){
        cout << "derived_2 class function start" << endl;
        Base::swim();
        cout << "derived_2 class function end" << endl;
    }
};

int main()
{
    Derived_1 d1;
    Derived_2 d2;
    Derived_2 * p2 = new Derived_2();
    d1.swim();
    d2.swim();

    //d2.swim(1); //这个是报错的，因为子类中重载了sim方法 只能通过下面方式
    d2.Base::swim(1);
    p2->Base::swim();


}