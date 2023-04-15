#include <iostream>
using namespace std; 

class Myclass {
private:
int numbers; 
char letters;

public : 
void setoutput (int n, char l){

numbers = n ; 
letters = l ;
}

int getoutput(){
    
return numbers ;  
}


};

int main (){
Myclass myobj; 
myobj.setoutput(2, 'A');
cout << myobj.getoutput();

    return 0; 
}