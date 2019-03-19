//
// Created by mhw on 18-11-18.
//
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    string a("abc");
    vector<int> b{0,1,2};

    cout << a <<endl;
    cout << b[1] <<endl;

    string line("");
    getline(cin,line);
    cout<< line << endl;
}
