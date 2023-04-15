#include <iostream>
using namespace std; 
#include <string> 

int main(){

    string firstname; 
    string middlename;
    string surname; 
    string fullname; 

    cout << "Please enter your firstname: " ;
    cin >> firstname ; 

    cout << "Enter your middlename: " ;
    cin >> middlename ; 

    cout << "Enter your surname: " ; 
    cin >> surname ; 

    fullname = firstname +" " + middlename + " " + surname  ; 

    cout << fullname ; 



    return 0 ;
}