//
// Created by mhw on 18-12-6.
//

#include <iostream>

using namespace std;

class Base
{
public:
    int a = 0;
    void f_base()
    {
        cout << "基类方法" << endl;
    }
};

class Derived_1 : protected Base //若这里为私有继承那么L33将无法获得base的方法  若这里是protected main中无法调用基类方法
{
public:

    void f_d_1(){
        cout << "derived_1 class function" << endl;
    }

};
class Derived_2 : public Derived_1
{
public:
    void f_2()
    {
        f_base();
    }
};

int main()
{
   Derived_2 d2;
    d2.f_2();
//    d2.f_base();

}