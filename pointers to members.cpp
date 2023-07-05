#include<iostream>
using namespace std;
class M{
    int x;
    int y;
  public:
    void set_xy(int a, int b){
    x=a;
    y=b;
    }
    friend int sum(M m);
};
int sum(M m){
  int M::* ip_x = &M:: x;          // pointer to data member
  int M::* ip_y = &M:: y;          // pointer to data member
  M *ptr_m = &m;                   // pointer to object
  int s = ptr_m->*ip_x + ptr_m->*ip_y;     // accessing class members in friend function using pointers to members
  return s;
}
int main(){
  M m1;
  M *ptr_m1= &m1;                   
  void (M::* ptr_set_xy)(int,int) = &M:: set_xy;
  (ptr_m1->*ptr_set_xy)(5,4);
  cout<<sum(m1)<<"\n";
  return 0;
}

/*
pointer-to-data-member =>
return-type class-name ::* pointer-name = &class-name :: class-variable;

pointer-to-member-function =>
return-type (class-name ::* pointer-name )(arguments-signature) = &class-name :: member-function;

pointer-to-object =>
class-name *pointer-name = &object-name;

say, object is m1, data-member is integer variable num, and pointer to nums is ip, pointer to m1 is obj


accessing data member(i.e num) using object and pointer-to-data-member =>
cout<<m1.*ip;

accessing data member(i.e num) using object and pointer-to-data-member =>
cout<<obj->*ip;

*/
