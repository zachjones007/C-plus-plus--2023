
//The program should validate the numbers that are entered for each section
//A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
// A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
//  The theater has 300 seats in section A, 500 seats in section B,
//  and 200 seats in section C The theater has 300 seats in section A, 
// 500 seats in section B, and 200 seats in section C
// will indicate the amount of seats left to be purchased in each section 
#include <iostream>
using namespace std;
int main() {
cout << "section 1: 20$, section 2: 15$, section 3: 10$"<< std::endl;
cout << "section 1: 300 seats, section 2: 500 seats, section 3: 200 seats"<< std::endl;
float a, b ,c;
float A, B, C;
float priceA,priceB,priceC;
priceA = 20;
priceB = 15;
priceC = 10;
a = 300;
b = 200;
c = 100;
cout << "room 1 seating";
cin >> A ;
cout << "room 2 seating";
cin >> B ;
cout << "room 3 seating";
cin >> C ;
int remaindera =a - A;
int remainderb = b - B;
int remainderc = c - C;
if (remaindera >= a) {
cout << "room 1 is full" << std::endl;
}
float profitA = A*priceA;
float profitB = B*priceB;
float profitC = C*priceC;
float profit = (profitA+profitB+profitC);
std::cout << "room 1 : " << remaindera << " room 2: " << remainderb << " room 3: " << remainderc << std::endl;
std::cout << "profit: " << profit << std::endl;
  // checks if there are spots left to sit
  if (remaindera > 0) {
    cout << "you have : " << remaindera << " seats left in section A"<<endl;
  }
  if (remainderb > 0) {
    cout << "you have : " << remainderb << " seats left in section B"<<endl;
  }
  if (remainderc > 0) {
    cout << "you have : " << remainderc << " seats left in section C"<<endl;
  } 
}
