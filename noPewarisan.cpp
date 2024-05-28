#include <iostream>
using namespace std;

class baseClass
{
    public:
    virtual void perkenalan() final
    {
        cout << "Halo saya function dari base class" << endl;
    }
};

class derivedClass : public baseClass
{
    public:
    void perkenalan()
    {
        cout << "Halo saya function dari derived class" << endl;
    }
};
int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}