#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    vector <int> intArr;
    intArr.push_back(123);
    intArr.push_back(456);
    intArr.push_back(778);
    intArr.push_back(889);

    auto arrIter = intArr.begin();
    while(arrIter != intArr.end())
    {
        cout << *arrIter << endl;
        arrIter ++ ;
    }

    auto findResIter = std::find(intArr.begin(), intArr.end(), 889);
    if( findResIter != intArr.end())
    {
        int pos = distance(intArr.begin(), findResIter);
        cout << pos << endl;
    }
    return 0;
}
