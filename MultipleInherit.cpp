//Class A + Class B --> Class C
#include<iostream>
using namespace std;

class Parent1{
public:
    Parent1(){
        cout<<"Parent1 class"<<endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout<<"Parent2 class"<<endl;
    }


};


class Child: public Parent1, public Parent2{
public:
        Child(){
            cout<<"Child Class"<<endl;
        }
};

class GrandChild:public Child{
public:
     GrandChild() { 
    cout<<"GrandChild Class"<<endl;}

};
int main(){
    Child c;

    return 0;
}

//Parent --> Child --> GrandChild
//First dono class k parent ka constructor call hoga then child ka