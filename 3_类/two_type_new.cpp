//
// Created by mhw on 18-12-5.
//
#include <iostream>
#include <string>
using namespace std;


class A{
public:
    int a;
    A():a(10){};
};

int main(){

    A* p1 = new A;
    A* p2 = new A();
    cout << p1->a << endl;
    cout << p2->a << endl;

    int * p_int_1 = new int;
    int * p_int_2 = new int();
    cout << *(p_int_1) <<endl;
    cout << *(p_int_2) <<endl;


    int *pint1 = new int(1);
    int *pint2 = new int();
    int *pint3 = new int;

    std::cout<<*pint1<<" "<<*pint2<<" "<<*pint3<<std::endl;

    int a;

    cout << a <<endl;

    string * s1 = new string;
    string * s2 = new string();
    cout << "11:" << *s1 <<endl;
    cout << "22:" << *s2 <<endl;
/*
 * out:
10
10
0
0
1 0 0
1600061541
11:
22:

 * */
}
