#include <iostream> 
using namespace std; 

int main (){ 
    

    int numbers = 20 ;
    int* num = &numbers; 

    cout << &numbers <<"\n"; 
    cout<< num <<"\n"; 

//*num = 50 ; 
//cout << *num ; 

    return 0; 
}