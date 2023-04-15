#include <iostream>
using namespace std;

class Product{
public:
int multiply (int a, int b){

return a * b;
}

};

int main(){
Product myobj;
cout << myobj.multiply(10,5) ;

    return 0;
}