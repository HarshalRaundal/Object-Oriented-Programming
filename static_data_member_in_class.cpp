#include<iostream>
using namespace std;

class item{
    static int count ;      // static variable declaration
    // Compiler will initialize this count with zero at creation of first object
    
    // static int count = 3;      // Invalid
    /*
    Above line will result in error : 
    error: ISO C++ forbids in-class initialization of non-const static member ‘item::count’
    */
    
    int number;
    public:
        void getdata(int a){
        number = a;
        count++;
}
void getcount(){
    cout<<"Count: "<<count<<"\n";
}
};

int item :: count;  

// int item :: count = 3;     // valid declaration of static variable

int main() {
    item a,b,c;
    a.getdata(10);
    b.getdata(20);
    c.getdata(30);
    a.getcount();       // output -> 3
    b.getcount();       // output -> 3
    c.getcount();       // output -> 3
    return 0;
}
