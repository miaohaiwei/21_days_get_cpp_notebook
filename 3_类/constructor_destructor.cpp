////
//// Created by mhw on 18-11-20.
////
#include <iostream>

using namespace std;
class Human
{
private:
    int age ;

public:
    Human(int humanAge):age(humanAge){
        cout<< "this is constructor" << endl;

    }
    ~ Human(){
        cout<< "this is destructor" << endl;
    }
    int getAge()
    {
        return age;
    }

    int setAge(int humanAge){
        age=humanAge;
    }
};


int main()
{

    Human human(25);
    cout << human.getAge() << endl;

}
