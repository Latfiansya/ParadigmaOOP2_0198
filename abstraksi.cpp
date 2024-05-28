#include <iostream>
using namespace std;

class AbstraksiKlas
{
    private:
    string x, y;

    public:

    //method untuk menngisi nilai
    //private member
    void setXY(string a, string b) 
    {
         x = a; 
         y = b; 
    } 
    //method untuk menampilkan nilai
    void display()
    {
        cout << x << endl;
        cout << y << endl;
    } 
};

int main()
{
    AbstraksiKlas ak;
    ak.setXY("Hello", "World");
    ak.display();
    
    return 0;
}