#include<iostream>

using namespace std;


template <typename T1 = int , typename T2 = int >
class ValueParie{
private:
    T1 val1;
    T2 val2;
public:
    ValueParie(const T1& val1_, const T2& val2_):
    val1(val1_),val2(val2_){}

    void setValue(const T1& val1_, const T2& val2_)
    {
        val1=val1_;
        val2=val2_;
    }
    T1 getVal1(){
        return val1;
    }

    T2 getVal2(){
        return val2;
    }
};


int main(int argc, char const *argv[])
{

    ValueParie<> vv{1,2};
    cout << vv.getVal1() << endl;
    cout << vv.getVal2() << endl;
    /* code */
    return 0;
}
