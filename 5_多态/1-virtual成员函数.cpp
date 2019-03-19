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
    void swim()
    {
        cout << "jiyu swim" << endl;
    }
};

class Nianyu:public Fish
{
public:
    void swim()
    {
        cout << "nianyu swim" << endl;
    }
};

void make_swim(Fish & fish)
{
    fish.swim();
}
int main()
{
    Jiyu jiyu;
    Nianyu nianyu;
    Fish * p_f =new Jiyu();
    p_f->swim();
    p_f->swim_2();
//    make_swim(nianyu);
//    make_swim(jiyu);
}

