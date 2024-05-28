#include <iostream>
using namespace std;

class seseorang
{
    public:
    virtual void pesan() = 0; //pure virtual function (override)

    // virtual function biasa
    // virtual void pesan()
    // {
    //     cout << "pesan dari seseorang" << endl;
    // }
};

class joko : public seseorang
{
    public: 
    void pesan()
    {
        cout << "pesan dari joko" << endl;
    }
};

class lia : public seseorang
{
    public:
    void pesan()
    {
        cout << "pesan dari lia" << endl;
    }
};

int main()
{
    seseorang *obyek;
    joko a;
    lia b;

    obyek = &a;
    obyek->pesan();
    obyek = &b;
    obyek->pesan();

    return 0;
};