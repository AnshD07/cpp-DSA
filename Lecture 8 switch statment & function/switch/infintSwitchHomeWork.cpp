#include <iostream>
using namespace std;
int main()
{
   int num = 1;
   while (1)
   {
      switch (num)
      {
      case 1:
         cout << "Nothing" << endl;
         break;

      case 3:
         cout << "Leave this Loop" << endl;
         exit(1);
      }
   }

   // switch(num){
   //    case 1: cout << "raj" << endl;
   //          continue;
      
   // }
}