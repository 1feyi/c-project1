#include <iostream>
#include <string>
using namespace std;

int main (){


//About school
struct { 
    string name ; 
    string location ; 
    int year ; 
    string level ; 
}myschool; 



// output and input 
cout<< " Please enter the name of your school: " <<"\n" ;
cin >> myschool.name ; 

cout << " Enter your schools location: " <<"\n" ;
cin >> myschool.location ; 

cout << " Enter the year it was founded: " <<"\n";
cin >> myschool.year ;

cout << " Enter your level: " <<"\n" ;
cin >> myschool.level ;

cout << "Your school information is:" << myschool.name <<"\n" << myschool.location <<"\n" << myschool.year <<"\n" <<myschool.level ;

    return 0;
}