//
// Created by mhw on 18-12-8.
//
#include <iostream>

using namespace std;

class Fish
{
public:
    Fish()
    {
        cout << "Fish的构造函数" << endl;
    }
    ~Fish()
    {
        cout << "Fish的析构函数" << endl;
    }


};


class Jiyu : public Fish
{
public:
    Jiyu()
    {
        cout << "鲫鱼的构造函数" << endl;
    }
    ~Jiyu()
    {
        cout << "鲫鱼的析构函数" << endl;
    }
};

class Nianyu:public Fish
{
public:
    Nianyu()
    {
        cout << "鲶鱼的构造函数" << endl;
    }
    virtual ~Nianyu()
    {
        cout << "鲶鱼的析构函数" << endl;
    }
};

void delete_fish(Fish * fish)
{
    delete fish;
}
int main()
{
    Fish * p_fish = new Nianyu;
    delete_fish(p_fish);
}

