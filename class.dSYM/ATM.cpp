#include <iostream>
using namespace std; 

int main (){

cout << " Welcome. Enter your 4 digit pin: " ; 

struct {
    int myPin; 
}myStructure; 

if (myStructure.myPin >=0000 )


 {  
cin >> myStructure.myPin;
cout << "Select an option " <<"\n";
cout << " 1. Account Balance " <<"\n"; 
cout << " 2. Cash Withdrawal " << "\n";
cout << " 3. Transfer " <<"\n";  
}
else { 
    cout<< "incorrect" ;
}




int savings; 
int dispense; 
int trans;  
int name ; 




cin >> savings ; 
 


 if( savings ==1){
    cout << " Enter your lastname" ;
    cin >> name ; 
    cout << " Your account balance is : 750000 ";
    


 } else if ( savings ==2){
    cout << " Enter amount "; 
    cin >> dispense ; 
    cout << " Withdrawal successful, please collect your cash. " ;



} else if ( savings ==3){
    cout << " Enter amount ";
    cin >> trans ;
    cout << " Transaction Successful.";

        
}else {
        cout << " Please enter the correct option. "; 
    } 
    

    return 0; 
}