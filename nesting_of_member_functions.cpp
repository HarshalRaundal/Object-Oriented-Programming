#include <iostream>

using namespace std;

class item{
    int number; // private by default
    float cost; // private by default
    public:
    void getData(int, float); // function declaration
    void putData(){ 
        yetToDeclare();
        cout<<"number: "<<number<<"\ncost: "<<cost <<"\n";   // function definition
    }
    // --------------- code of highlight -------------------
    //------------------------------------------------------
    
    void yetToDeclare(){
        cout<<"Inside yetToDeclare"<<endl;       // nesting of member functions
    }
    
    //------------------------------------------------------
    // --------------- code of highlight -------------------
    
};

void item :: getData(int a, float b){          // use of membership label
    number = a;      // private variables directly accessed
    cost = b;
}

// -------- main program ----------
int main() {
    item x,y;        // memory allocation for objects : object creation
    x.getData(100,75.5);    // call to member function
    y.getData(200,299.99);     // call to member function
    cout<<"\nObject x\n";
    x.putData();                 // call to member function
    cout<<"\nObject y\n";
    y.putData();                  // call to member function
    return 0;
}
