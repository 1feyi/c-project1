#include <iostream>
using namespace std; 

class makeup {
public:
string name; 
string type;
string shade; 

};

int main(){
makeup foundation;
foundation.name = " fenty ";
foundation.type = " concealer "; 
foundation.shade = " black 15";
   
cout << foundation.name << " "<< foundation.type << " " << foundation.shade ; 
    return 0;
}