#include <iostream>
using namespace std;
int main() {

float a, b ,c;




// It is safe to assume a, b, c will be in float, float, char form?
cout << "enter day,amount inputs:";
cin >> a ;
cout << "price(w/tax):";
cin >> b ;
cout << "amount inputs:";
cin >> c ;


float day = a; 
float tax = b * .75;
float amount = c/7L;

std::cout << "day: " << day << " tax: " << tax << " amount: " << amount << std::endl; 

}
