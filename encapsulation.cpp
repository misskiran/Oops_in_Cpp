/*Encapsulation
 -Property which ensures binding of methods & variables together into a single unit (class).
 (Functions & data).
 -It makes the data accessible only through the class methods that are defined in that particular class.
 -It leads to data abstraction or Hiding. Hence Class is also known as Abstract Data Type(ADT).
 
*/

#include<iostream>
using namespace std;

class ABC{
    int x;
    
    public:

    void set (int n){
        x = n;
    }

    int get(){
        return x;
    }

};

int main(){
    ABC obj1;
    // obj1.x  is valid as x is private to class  ABC
    obj1.set(3);
    cout<<obj1.get()<<endl;
   

    return 0;
}
