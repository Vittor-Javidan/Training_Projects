#include <iostream>

int main()
{
   bool a{true};
   bool b{false};
   bool c{true};

   std::cout << std::boolalpha;
   std::cout << "a : " << a << std::endl;
   std::cout << "b : " << b << std::endl;
   std::cout << "c : " << c << std::endl;

   // AND:   Evaluates to true when all operands are true.
   //        A single false operand will drag
   //        the entire expression to evaluating false

   std::cout << std::endl;
   std::cout << "Basic AND operations" << std::endl;

   std::cout << " a && b : " << (a && b) << std::endl;
   std::cout << " a && c : " << (a && c) << std::endl;
   std::cout << " a && b && c : " << (a && b && c) << std::endl;

   // OR:    Evaluates to true when at least one  operand true.
   //        A single true operand will push
   //        the entire expression to evaluating true.

   std::cout << std::endl;
   std::cout << "Basic OR operations" << std::endl;
   std::cout << " a || b : " << (a || b) << std::endl;
   std::cout << " a || c : " << (a || c) << std::endl;
   std::cout << "a || b || c : " << (a || b || c) << std::endl;

   int d{45};
   int e{20};
   int f{11};

   std::cout << std::endl;
   std::cout << "Relational and logic operations on integers" << std::endl;
   std::cout << "d : " << d << std::endl;
   std::cout << "e : " << e << std::endl;
   std::cout << "f : " << f << std::endl;

   std::cout << std::endl;

   std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl;
   std::cout << "(d == e) || (e <= f) : " << ((d == e) && (e <= f)) << std::endl;
   std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
   std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
   std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
   std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
   std::cout << "(!a) && (d == e) : " << ((!a) && (d == e)) << std::endl;
   std::cout << "(!a) && (d == e) : " << ((!a) && (d == e)) << std::endl;

   //Combinations of all these operators
   std::cout << std::endl;
   std::cout << "Combining logical operators" << std::endl;
   std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl;  

   return 0;
}