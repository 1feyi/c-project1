#include <iostream>
#include <string>
using namespace std; 

int main (){

    string text, greetings ;
    cout<<"hello please state your name: ";
    cin >>  text;
    greetings = " hello ";
    


    for ( int x = 5 ; x > 0 ; x--){
       
         cout << greetings << text << "\n";
    
    }


    return 0;
}