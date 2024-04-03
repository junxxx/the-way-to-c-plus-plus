#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    int age;

public:
    string name;

    Person(string name)
    {
        this->name = name;
    }

    string getName()
    {
        return this->name;
    }

    ~Person()
    {
        cout << "Destructor";
    }
};

int main(int argc, char const *argv[])
{
    string name = "Panduola";
    Person user(name);
    cout << "Hello, world!" << endl;
    cout << user.getName() << endl;
    return 0;
}
