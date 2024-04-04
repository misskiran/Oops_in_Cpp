//Class A --> Class B and Class C
//Class A + Class B --> Class C
#include<iostream>
using namespace std;

class Parent1{
public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
};




class Child1: public Parent1{
public:
        Child1(){
            cout<<"Child1 Class"<<endl;
        }
};

class Child2: public Parent1{
public:
        Child2(){
            cout<<"Child2 Class"<<endl;
        }
};

int main(){
    Child1 c;
    Child2 d;

    return 0;
}

//Parent --> Child --> GrandChild
//First dono class k parent ka constructor call hoga then child ka



/*HYBRID INHERITANCE
Combination of more than 1 inheritance
Class A --> Class B & Class C 
Class C --> Class D
*/