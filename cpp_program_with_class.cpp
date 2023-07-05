#include <iostream>

using namespace std;

class item{
    int number; // private by default
    float cost; // private by default
    public:
    void getData(int, float); // function declaration
    void putData(){ 
        cout<<"number: "<<number<<"\ncost: "<<cost <<"\n";   // function definition
    }
};

void item :: getData(int a, float b){          // use of membership label
    number = a;      // private variables directly accessed
    cost = b;
}

// -------- main program ----------
int main() {
    item x,y;        // memory allocation for objects : object creation
    int number;
    float cost;
    cin>>number>>cost;
    x.getData(number,cost);    // call to member function
    cin>>number>>cost;
    y.getData(number,cost);     // call to member function
    cout<<"\nObject x\n";
    x.putData();                 // call to member function
    cout<<"\nObject y\n";
    y.putData();                  // call to member function
    return 0;
}
