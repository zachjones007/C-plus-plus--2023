#include <iostream>
using namespace std;
int main() {

float a, b,e;
char c;



// It is safe to assume a, b, c will be in float, float, char form?
cout << "enter day,price(w/tax),amount inputs:";
cin >> a >> b >> c>> e;

float day = a; 
float tax = b * .75;
float amount = c/7;

std::cout << "day: " << day << " tax: " << tax << " amount: " << amount << std::endl; 

}
