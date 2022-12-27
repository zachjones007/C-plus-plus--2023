#include <iostream>
using namespace std;
int main() {
    //generate a random number
srand((unsigned int)time(NULL));
cout << "Guess a number between 0 - 10 : "<<endl;
int num =   (rand() % 9);

int guess;
cin >> guess;

if (guess == num) {
cout << "you guessed the number"<<endl;
cout << num << endl;
 } else {
    cout << "you did not guess the number"<<endl;
    cout << num << endl;
  }
}
