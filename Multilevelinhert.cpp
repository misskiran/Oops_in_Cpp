#include<iostream>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"Parent class"<<endl;
    }


};

class Child: public Parent{
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
    GrandChild gc;

    return 0;
}

//Parent --> Child --> GrandChild