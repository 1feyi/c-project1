#include <iostream>
using namespace std; 

class computer{
    public:
string type; 
string colour;
int year;

};

int main (){
computer laptop1;

laptop1.type = " macbook air ";
laptop1.colour = " Rose gold ";
laptop1.year = 2020;


computer laptop2;

laptop2.type = " Del ";
laptop2.colour = " silver ";
laptop2.year = 2012;

cout << laptop1.type << " " << laptop1.colour << " " << laptop1.year <<"\n";
cout << laptop2.type << " " << laptop2.colour << " " << laptop2.year ;
    return 0; 
}