
//The program should validate the numbers that are entered for each section
//A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
// A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
//  The theater has 300 seats in section A, 500 seats in section B,
//  and 200 seats in section C The theater has 300 seats in section A, 
// 500 seats in section B, and 200 seats in section C


#include <iostream>
using namespace std;
int main() {

float a, b ,c;
float A, B, C;
a = 300;
b = 200;
c = 100;



// It is safe to assume a, b, c will be in float, float, char form?
cout << "room 1 seating";
cin >> A ;
cout << "room 2 seating";
cin >> B ;
cout << "room 3 seating";
cin >> C ;


float remaindera =a - A;
float remainderb = b - B;
float remainderc = c - C;
float profit = (remaindera + remainderb + remainderc)-(500);

std::cout << "room 1 : " << remaindera << " room 2: " << remainderb << " room 3: " << remainderc << std::endl; 
std::cout << "profit: " << profit << std::endl;
}
