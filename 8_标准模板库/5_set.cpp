#include<set>
#include<iostream>

using namespace std;
//总结如下：
//1.set 和 list 不能使用 std::sort() 因为std::sort必须使用其生成的随机迭代器，但是set和list不能随机取值（【n】操作）
//2.set.insert()不需要输入位置，因为set没有索引这个概念，所有的值都是有序的
template <typename T>
struct compare
{

    bool operator() (const T & a, const T & b)
    {
        return(a<b);
    }
};
void display(set<int,compare<int>> ss1)
{
    for (auto iter = ss1.begin();iter!=ss1.end();iter++)
    {
        cout << *iter ;
    }
    cout<< endl;
}

int main(int argc, char const *argv[])
{
    
    set<int,compare<int>> ss1{6,6,5,4,3,2,1};
    display(ss1);
    ss1.insert(0);
    display(ss1);
    set<int,compare<int>> ss2{100,99};
    ss1.insert(ss2.begin(), ss2.end());
    display(ss1);
    return 0;
}
