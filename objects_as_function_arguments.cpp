#include<iostream>
using namespace std;

class time_{
        int minutes;
        int hours;
    public:
        void gettime(int hr, int min){
            minutes = min;
            hours= hr;
        }
        void puttime(){
            cout<<"Hrs: "<<hours<<" , Minutes: "<<minutes<<"\n";
        }
        void sumtime(time_ t1, time_ t2){
            minutes = t1.minutes+t2.minutes;
            hours = minutes/60;
            minutes = minutes%60;
            hours += t1.hours + t2.hours;
        }
};

int main(){
    time_ t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sumtime(t1,t2);
    cout<<"t1: ";
    t1.puttime();
    cout<<"\n";
    cout<<"t2: ";
    t2.puttime();
    cout<<"\n";
    cout<<"t3: ";
    t3.puttime();
    cout<<"\n";
    return 0;
}

/*
OUTPUT:
t1: Hrs: 2 , Minutes: 45

t2: Hrs: 3 , Minutes: 30

t3: Hrs: 6 , Minutes: 15

*/
