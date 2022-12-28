#include <iostream>
using namespace std;
int main() {
    float A;
    do {
  
  cout << "press 5 to quit";
  cin >> A ; 
  cout << A << endl;


    }
    while (A < 5);


    int n, sum = 0;
    std::cout << "How many numbers do you want to enter? \n";
    std::cin >> n;
    std::cout << std::endl;

    std::cout << "Enter numbers: \n";
    for(int i = 1; i <= n; i++) {
        std::cout << i << ": ";

        int input;
        if(std::cin >> input) {
            if(input > n) {
                sum = sum + input;     
            }
            std::cout << sum << std::endl;
        } else if ( sum >= input ){

        }
        std::cout << input << std::endl;
            
    }
}
    

