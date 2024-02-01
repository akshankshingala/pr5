#include <iostream>
using namespace std;

class Exception {
public:
    void handle() {
        try {
        	throw   " caught: " ;
   
        } catch (...) {
            cout << "know exception caught!" << endl;
        }
    }
};

int main() {
    Exception handler;
    handler.handle();

    return 0;
}
