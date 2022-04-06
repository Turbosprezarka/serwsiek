#include <iostream>

int main()
{

   int pierwsza,druga;
   std::cout << "Podaj pierwszą liczbę: ";
   std::cin >> pierwsza;
   std::cout << "Podaj drugą liczbę: ";
   std::cin >> druga;
   int pierwszaf = pierwsza, drugaf = druga;
   while (pierwsza!=druga)
   {
      if (druga>pierwsza)
         druga-=pierwsza;
      else
         pierwsza-=druga; 
   }
   std::cout << "NWD wynosi = "<<pierwsza<<std::endl;
   std::cout << "NWW wynosi = "<<(pierwszaf*drugaf)/pierwsza;

   return 0;
}