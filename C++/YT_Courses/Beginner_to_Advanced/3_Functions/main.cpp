#include <iostream>

int AddNumbers(int first_number, int second_number){
   int sum = first_number + second_number;
   return sum;
}

int main(){
   
   int firstNumber = 12;
   int secondNumber = 9;

   int sum = firstNumber + secondNumber;

   sum = AddNumbers(firstNumber, secondNumber);

   sum = AddNumbers(34, 7);

   std::cout << "The sum of the two numbers is: " << sum << std::endl;
   std::cout << "The sum of the wto numbers is: " << AddNumbers(23, 8) << std::endl;

   return 0;
}