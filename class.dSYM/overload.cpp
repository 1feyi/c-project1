#include <iostream>
using namespace std; 

int myfunction (int x, int y ){

    return x + y ; }

string myfunction ( string fname, string sname) {


    return fname + " " + sname ; 
}


int main () {

int numbers = myfunction (10, 20); 
string fullname = myfunction ("sonia","kajotoni"); 

cout << "Int: " << numbers <<"\n"; 
cout << " Name: " << fullname ; 
    return 0;
}