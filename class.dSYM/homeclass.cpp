#include <iostream>
using namespace std; 

class mysiblings {
public:
string name;
string colour;
int age;
};


int main () {
mysiblings fam1;
fam1.name = " sharon " ; 
fam1.colour = " dark ";
fam1.age = 23  ;

mysiblings fam2; 
fam2.name = " salem ";
fam2.colour = " fair "; 
fam2.age = 16 ;

mysiblings fam3;
fam3.name = " sage ";
fam3.colour = " fair ";
fam3.age = 3;

cout << fam1.name << " " << fam1.colour << " " << fam1.age ;
,,
    return 0;
}