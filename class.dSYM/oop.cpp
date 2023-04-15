#include <iostream>
#include <string>
using namespace std;

class meal_prep{
public:
    string food ; 
    string fruit ; 
    int times;
    
};

int main(){

    meal_prep meal ; 
    meal.food = "rice";
    meal.fruit = "pineapple";
    meal.times = 5;
    cout <<  meal.food;


    return 0;
}
