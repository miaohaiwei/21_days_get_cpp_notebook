#include<vector>
#include<iostream>
#include<algorithm>


using namespace std;

void displayVector(vector<int> v)
{
    for (int vv:v){
        cout << vv << " ";
        
    }
    cout << endl;
}

bool compare(const int & a, const int & b)
{
    return(a>b);
}
int main(int argc, char const *argv[])
{
    //初始化构建
    //1.
    vector<int> v1 = {1,2,3,4};
    displayVector(v1);

    // vector<int> v2{1,2,3,4};
    // displayVector(v2);

    // vector<int> v3(10);
    // displayVector(v3);

    // vector<int> v4(10,90);
    // displayVector(v4);

    // vector<int> v5(v4.begin(), v4.begin()+2);
    // displayVector(v5);
    // cout << "------------------------"<< endl;
    
    // //push back
    // v5.push_back(100);
    // displayVector(v5);
    // cout << "-----------------------" << endl;

    // //插入
    // v5.insert(v5.begin(),10);
    // displayVector(v5);
    // //插入多个值
    // v5.insert(v5.begin(),2,99);//在begin位置插入两个99
    // displayVector(v5);
    // //插入另一个vector的一部分
    // vector<int> anthor(2,55);
    // vector<int> v6(3,99);
    // v6.insert(v6.begin(), anthor.begin(), anthor.end());
    // cout << "v6:" << endl;
    // displayVector(v6);

    // //删除最后一个元素
    // v6.pop_back();
    // displayVector(v6);

    // cout << v6.size()<< endl;
    // cout << v6.capacity() << endl;
    // cout << "--------------------------" << endl;
    // //sort
    // vector<int> aa{6,5,4,3,2,1};
    // sort(aa.begin(),aa.end(),compare);
    // displayVector(aa);
    // return 0;
}
