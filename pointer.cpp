#include <iostream>
using namespace std;

class A{
    int a;
    A* add = this;
    public:
        A& setData(int a){
            this->a = a;
            return *this;
        }
        void getData(void){
            cout<<"The value of a is "<<a<<endl;
            cout<<"This ="<<this<<endl;
            cout<<"Address through A* add ="<<add<<endl<<endl;;
        }
        
};

int main(){
    A a;
    A* b;
    b=&a;
    a.setData(5).getData();
    a.getData();
    cout<<"Address of object a is b ="<<b;
}
