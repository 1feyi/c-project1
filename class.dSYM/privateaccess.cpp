#include <iostream> 
using namespace std; 
class Tutor{
private:
int income;

public:
void setincome(int i){
income = i ; 
}

int getincome (){
    return income; 
}
};


int main (){

Tutor myobj;
myobj.setincome(1000000);
cout<< myobj.getincome();

    return 0;
}