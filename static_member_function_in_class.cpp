#include<iostream>
using namespace std;

class test{
    
    int code;
    static int count;
    
    public:
    void setcode(){
        code = ++count;                      // updating static and non-static member variables i.e count and code
    } 
    void showcode(){
        cout<<"Object Number: "<<code<<"\n";
    }
    static void showcount(){
        cout<<"count: "<<count<<"\n";          // accessing static data variable in static member function
    }
};

int test :: count;                 // type and scope definition of static variable outside class definition

int main(){
    test a,b,c;
    a.setcode();
    b.setcode();
    c.setcode();
    a.showcode();
    b.showcode();
    c.showcode();
    test :: showcount();            // static member function called using class ans scope resolution operator
    a.showcount();                 // static member function called using object
    return 0;
}





/*
OUTPUT: 
Object Number: 1
Object Number: 2
Object Number: 3
count: 3
count: 3
*/
