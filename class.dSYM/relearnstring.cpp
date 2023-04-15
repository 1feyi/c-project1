#include <iostream>
#include <string>
using namespace std; 

int main(){

string name = "sonia"; 
cout << name.length();

string food = " i love to drink tea \\ coffee in the morning \n"; 
cout << food ;

string beauty = " the girl owns a \"beauty\" salon ";
cout << beauty; 

// In strings, you use getline() to input strings and not cin  it is getline() in your parameter, you have cin and the variable name.

string fullname ; 

cout << "what is your name?";
getline(cin , fullname);
cout << " i love " << fullname ; 
    return 0; 
}