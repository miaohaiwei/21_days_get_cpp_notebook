#include<deque>
#include<iostream>

using namespace std;
void displayDeque(deque<int> v)
{
    for (int vv:v){
        cout << vv << " ";
        
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    deque<int> dd{1,2,3};
    dd.push_back(0);
    dd.push_front(0);
    displayDeque(dd);
    dd.pop_front();
    displayDeque(dd);
    dd.pop_back();
    displayDeque(dd);
    return 0;
}
