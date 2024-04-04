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

int main(){
    Child c;
    return 0;
}
//Since Child class is inheriting property of parent class
// Hence , first parent class constructor will be called , 
//Then child class constructor will be called.
