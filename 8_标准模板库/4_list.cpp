#include<list>
#include<iostream>

using namespace std;
//总结如下：
//1.set 和 list 不能使用 std::sort() 因为std::sort必须使用其生成的随机迭代器，但是set和list不能随机取值（【n】操作）

bool compare(const int & a, const int & b)
{
    return(a<b);
}

int main(int argc, char const *argv[])
{
    list<int> ll{6,5,4,3,2,1};
    ll.sort(compare);    
    for (auto iter = ll.begin();iter!=ll.end();iter++)
    {
        cout << *iter ;
    }
    cout << endl;
    return 0;
}
