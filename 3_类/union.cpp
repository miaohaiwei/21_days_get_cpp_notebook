//
// Created by mhw on 18-11-28.
//
#include <iostream>
#include <string>

using namespace std;

struct CompledType
{
    union Value
    {
        int num;
        char al;
    }value;
};

class Testtt
{
private:
    int a;
public:
    Testtt()
    {
        cout << "111";
    }
    Testtt(int a)
    {
        cout << "222";
    }
    Testtt(int a, string b)
    {
        cout << "222";
    }
};

int main()
{
//    CompledType num;
//    num.value.num = 2;
//    cout <<num.value.num<<endl;
//    num.value.al = 'a';
//    cout <<num.value.al<<endl;
    cout << "Testt t1:";
    Testtt t1;
    cout <<endl;

    cout << "Testt t2():";
    Testtt t2();
    cout <<endl;

    cout << "Testt t3(1):";
    Testtt t3(1);
    cout <<endl;

    cout << "Testtt* p1 = new Testtt :";
    Testtt* p1 = new Testtt;
    cout <<endl;

    cout << "Testtt* p2 = new Testtt():";
    Testtt* p2 = new Testtt();
    cout <<endl;

    cout << "Testtt* t3 = new Testtt(1):";
    Testtt* p3 = new Testtt(1);
    cout <<endl;

}

