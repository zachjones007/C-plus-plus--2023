
//The program should validate the numbers that are entered for each section
//A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
// A seats cost $20 each, section B seats cost $15 each, and section C seats cost $10 each.
//  The theater has 300 seats in section A, 500 seats in section B,
//  and 200 seats in section C The theater has 300 seats in section A, 
// 500 seats in section B, and 200 seats in section C


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


float remaindera =a - A;
float remainderb = b - B;
float remainderc = c - C;
float profitA = A*priceA;
float profitB = B*priceB;
float profitC = C*priceC;
float profit = (profitA+profitB+profitC);


std::cout << "room 1 : " << remaindera << " room 2: " << remainderb << " room 3: " << remainderc << std::endl;
std::cout << "profit: " << profit << std::endl;
}
