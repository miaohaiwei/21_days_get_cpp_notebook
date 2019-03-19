#include<iostream>

using namespace std;


template <typename T>
const T getMax(const T& val1, const T& val2)
{
    if ( val1 > val2)
        return val1;
    return val2;
}

int main(int argc, char const *argv[])
{
    
    int a =1, b=2;
    cout << getMax<int>(a,b) << endl;
    cout << getMax(a,b) << endl;
    return 0;
}
