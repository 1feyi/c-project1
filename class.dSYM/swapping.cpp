#include <iostream>
using namespace std; 

int main(){

int height ;
int width ;
int swap ; 


height = 50 ;
width = 140 ;
cout << " Initial value of height = " << height <<"\n" ;
cout << " Initial value of width = " << width <<"\n" ;


//swapping
swap = height ; // swap = (h)50. Therefore, new value of swap is 50.
height = width ; // height = (w)140. Therefore, new value of height is 140.
width = swap ; // width = swap. remember swap = 50, Therefore, new value of width is 50.

cout << " Final value of height = " << height <<"\n";
cout << " Final value of width = " << width ;

    return 0 ;
}