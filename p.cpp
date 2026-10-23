#include <iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;

};
class teacher:public person{
    public:
    string subject;

    teacher (string name,int age,string subject){
        this->name=name;
        this->age=age;
        this->subject=subject;

    }

    void display(){
        cout<<name<< " "<<age<<" "<<subject; 
    };

};
int main(){
    teacher t1("Ali",21,"Calculus");
    t1.display();
   
}