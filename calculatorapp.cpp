#include <iostream>
using namespace std; 

int main(){

    int x, y ;
    int sum ; 

//sum of values
    cout << "input a value: " ; 
    cin >> x ;

    cout << " input a value: " ; 
    cin >> y ; 

    sum = x + y ;

    cout << "sum of two values: " << sum <<"\n";

//Multiplied values 

    int a, b ; 
    int multiply; 
    
    cout << "Enter a value: " ;
    cin >> a ; 

    cout << "Enter a second value: " ; 
    cin >> b ; 

    multiply = a * b ;
    
    cout << " multiplied value is: " << multiply <<"\n"; 


// Divided values 


int f, g ;
int division ; 

cout << "input your value: " ; 
cin >> f ; 

cout << "input a second value: "; 
cin >> g ; 

division = f / g ; 

cout << "your divided value is: " << division ; 

    return 0;
}
