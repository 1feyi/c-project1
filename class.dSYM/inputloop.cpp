#include <iostream>
#include <string> 
using namespace std; 

int main (){
    string message ;
    cout <<" Please enter your text : " ;
    getline (cin,message);

    for (int x = 0 ; x <= 15; x++)
    {cout << message << " \n ";}



    return 0 ;
}