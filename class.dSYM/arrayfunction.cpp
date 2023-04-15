#include <iostream> 
using namespace std; 

void myfunction(int myarray[5]) 
{ 
for (int i=0; 5 >= i; i++)
cout << myarray[i] ; 
}

int main () {
    
   int myarray[5] = { 7, 6, 1555, 42, 350} ; 
    myfunction (myarray);

return 0;
}