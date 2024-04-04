#include<iostream>
using namespace std;

class Rectangle{
public:
    int l;
    int b;


Rectangle(){ //defaulter constructor -no args passed
    l=0;
    b=0;
}

Rectangle(int x ,int y){ //parameterised -args passed
    l=x;
    b=y;
}

Rectangle(Rectangle& r){ //copy constructor- initialize an obj by existing object
   l= r.l;
   b= r.b;
}

~Rectangle(){ //destructor
   cout<<"Destructor is Called"<<endl;

}
};  //class ends

int main(){
   //Suppose a pointer is created when object is created using new operator
   //Then we delete the object using delete() keyword.
   Rectangle* r1 = new Rectangle();
   cout<<r1->l<<" "<<r1->b<<endl;
   delete r1;

   Rectangle r2(3,4);
   cout<<r2.l<<" "<<r2.b<<" "<<endl;
   
   Rectangle r3=r2;
   cout<<r3.l<<" "<<r3.b<<" "<<endl;
}


// Points:
// - Destructor is called when object is deleted.
// - We cannot pass any parameters through it.
// - has ~(class_name)
// - When the program ends , by default the objects are deleted i.e. Destructor is called .
// - Can see in the ouput.
