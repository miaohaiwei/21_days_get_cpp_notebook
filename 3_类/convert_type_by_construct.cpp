//
// Created by mhw on 18-11-22.
//

#include <string>
#include <iostream>

using namespace std;


class Human
{
private:
    string name;

public:
    Human(string init_name){
        cout << "string constructor "<< endl;
        name = init_name;
    }

    Human(int init_name)
    {

        cout << "int consturctor" << endl;
        name = std::to_string(init_name);
    }

    string GetName()
    {
        return name;
    }
};

void DoSomething(Human human)
{
    cout << human.GetName() << endl;
}



int main()
{

    Human human(11);
    Human human1("11");
//    DoSomething("1");
    DoSomething(1);

}