//
// Created by mhw on 18-12-8.
//
#include <iostream>

using namespace std;

class Fish
{
public:
    virtual void swim()
    {
        cout << "fish swim" << endl;
    }
    void swim_2()
    {
        cout << "fish swim2" << endl;
    }
};


class Jiyu : public Fish
{
public:
    void swim() override final //override函数确保swim能在基类上找到且为虚函数
                               // final确保不可覆盖
    {
        cout << "jiyu swim" << endl;
    }
};


int main()
{
    Fish * p_f =new Jiyu();
    p_f->swim();

}

