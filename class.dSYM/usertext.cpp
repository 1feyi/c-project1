#include <iostream>
#include <string>
using namespace std;

int main () {

string text ; 
cout << " Write your message: ";
getline(cin,text );
    for (int i =0; i<20; i++){
        cout << text << "\n";
    }
        
    return 0;
}