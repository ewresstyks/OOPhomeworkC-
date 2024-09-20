
#include <iostream>
#include <random>
using namespace std;

class fraction {
private:
    int a, b;
public:
    void Print() {
        cout << "result a/b -- " << a / b << endl;
    }
    void Input(int a2, int b2) {
        a = a2;
        b = b2;
    }
    void InputRand() {
        srand(time(0));
        a = 1 + rand() % (100 - 1 + 1);
        b = 1 + rand() % (100 - 1 + 1);
    }
};

int main()
{
    fraction a2;
    a2.Input(4, 2);
    a2.Print();

    fraction b2;
    b2.InputRand();
    b2.Print();
}