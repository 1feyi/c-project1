#include <iostream> 
using namespace std; 

int main(){ 

struct{
    int myNum; 
} myStructure;

// To access members of a structure use the dot syntax

myStructure.myNum = 10 ; 


cout << myStructure.myNum ;

struct{ 
    string Name;   
    string Department; 
    int Age;
} myStruct1, myStruct2, myStruct3;

myStruct1.Name = " Sonia Oyinkansola Kajotoni ";
myStruct1.Department = " Computer Science ";
myStruct1.Age =  20 ; 

myStruct2.Name = " Ayokunle Oluwatobi Omidiji " ; 
myStruct2.Department = " Mechanical Engineering ";
myStruct3.Age = 23 ; 

cout<< myStruct1.Name << myStruct1.Department << myStruct1.Age <<"\n";

    return 0;
}