#include <iostream>
#include <string> 
using namespace std; 

int main () {

    int x = 5; 
    int &y = x; 
    cout << x << ' '; 
    cout << y << ' '; 
    cout << &x ;


    string junk = " ham bugger " ;
    string* ptr = &junk ;
    cout << *ptr ; 







    return 0;
}