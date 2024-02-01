
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class" <<endl;
    }
};

class Derived1 : virtual public Base {
public:
    void display() {
       cout << "Derived1 class" <<endl;
    }
};

class Derived2 : public Base {
public:
    void display() {
        cout << "Derived2 class" << endl;
    }
};

class Hybrid : public Derived1, public Derived2 {
public:
    void display() {
       cout << "Hybrid class" << endl;
    }
};

int main() {
    Hybrid hybrid;
    hybrid.display();

    return 0;
}
