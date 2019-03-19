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
            cout << "swim" << endl;
        }
        else{
            cout << "淹死了" << endl;
        }
    }
};

class Derived_1 : public Base
{
public:
    // 向基类传递参数
    Derived_1():Base(1){}

};
class Derived_2 : public Base
{
public:
    Derived_2():Base(0){}

};

int main()
{
    Derived_1 d1;
    Derived_2 d2;
    d1.swim();
    d2.swim();

}