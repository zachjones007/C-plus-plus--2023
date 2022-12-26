#include <iostream>
using namespace std;
int main() {

float a, b ,c;
float A, B, C;
a = 300;
b = 200;
c = 100;



// It is safe to assume a, b, c will be in float, float, char form?
cout << "enter day,amount inputs:";
cin >> A ;
cout << "price(w/tax):";
cin >> B ;
cout << "amount inputs:";
cin >> C ;


float remaindera =a - A;
float remainderb = b - B;
float remainderc = c - C;
float profit = (remaindera + remainderb + remainderc)-(500);

std::cout << "day: " << remaindera << " tax: " << remainderb << " amount: " << remainderc << std::endl; 
std::cout << "profit: " << profit << std::endl;
}
