/*
A class inherits properties of another class
A- parent class , B - Child class or sub class
Access specifier : by default : private . Otherwise write it as public.
*/
#include<iostream>
using namespace std;

class Parent{
    public:
    int x;

    protected:
    int y;

    private:
    int z;

};  

class Child1:public Parent{
    //Child1 is inheriting Parent publicly
    //x  will remain public
    //y will remain protected
    //z will not be accessible
};

class Child2:private Parent{
    //Child2 is inheriting Parent privately
    // x will be private
    // y will be private
    // z not accessible
};

class Child3:protected Parent{
    //Child3 is inheriting Parent protectedly
    // x and y will be inaccessible
    //z will be inaccessible

};


int main(){
    Parent p;
    cout<<p.x;

return 0;
}

//protected means accessible by own class , its parent , its child
//private is accessible only within the class