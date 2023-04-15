#include <iostream>
#include <string> 
using namespace std;

class Schools{
public:
string name; 
string location;
int year; 

Schools (string x, string y,  int z){
 name = x ; 
 location = y ;
 year = z;

}

};

int main (){
Schools obj1(" faith academy ", " Abuja", 2018 );

cout<< obj1.name << " " << obj1.location << " " << obj1.year ; 

    return 0; 
}