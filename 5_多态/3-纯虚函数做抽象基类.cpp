//
// Created by mhw on 18-12-9.
//
#include <iostream>

using namespace std;

class Fish
{
public:
    // 纯虚函数  这样可以定义一个抽象基类
    virtual void swim() = 0;


};

class jiyu : public Fish
{
public:
    void swim()
    {
        cout << "鲫鱼在游泳" << endl;
    }
};

class nianyu : public Fish
{
public:
    void swim()
    {
        cout << "鲶鱼在游泳" << endl;
    }
};

int main()
{
    Fish * p_fish_1 = new jiyu;
    Fish * p_fish_2 = new nianyu;

    p_fish_1->swim();
    p_fish_2->swim();

}
