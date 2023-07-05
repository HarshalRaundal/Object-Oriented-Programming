#include <iostream>

using namespace std;

class item{
    public:
    void member_function(){
        nested_function(); // calling another member function  without dot operator
    }
    void nested_function(){
        cout<<"INSIDE NESTED FUNCTION\n";
    }
};

// -------- main program ----------
int main() {
    item x;
    x.member_function();
    return 0;
}
