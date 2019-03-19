#include<unordered_set>
#include<iostream>
using namespace std;


// unordered_set 和 unordered_multiset就是 hash_set,查找速度较快

int main(int argc, char const *argv[])
{
    
    unordered_set<int> ss{1,2,3,4,6,5,5,55};
    auto find_res = ss.find(1);
    if(find_res == ss.end())
    {
        cout << "not found!" << endl;
    }else
    {
        cout << "find!" << endl;
    }
    return 0;
}
