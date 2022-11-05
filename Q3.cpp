#include<iostream>
using namespace std;
class animal{
public:
virtual void sound(){
cout<<"sound of animal";
}
};
class dog:public animal{
public:
void sound(){
    cout<<"bow-bow "<<endl;
}
};
int main(){
    animal *a;
    dog d;
    a=&d;
    a->sound();
    return 0;
}
