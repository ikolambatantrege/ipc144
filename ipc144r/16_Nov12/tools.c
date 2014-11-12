#include "tools.h"
void keybFlush(){
   while(getchar() != '\n');
}
int getInt(){
   int val;
   char nl = 'x';
   while (nl != '\n'){
      scanf("%d%c", &val, &nl);
      if (nl != '\n'){
         keybFlush();
         printf("Invalid Integer, please try again: ");
      }
   }
   return val;
}
double getDouble(){
   double val;
   char nl = 'x';
   while (nl != '\n'){
      scanf("%lf%c", &val, &nl);
      if (nl != '\n'){
         keybFlush();
         printf("Invalid number, please try again: ");
      }
   }
   return val;
}
int getLimInt(int lowerLimit, int upperLimit){
   int val;
   do{
      val = getInt();
   } while ((val < lowerLimit || val > upperLimit) && printf("Invalid value, %d < value < %d: "));
   return val;
}
double getLimDbl(double lowerLimit, double upperLimit){
   double val;
   do{
      val = getDouble();
   } while ((val < lowerLimit || val > upperLimit) && printf("Invalid value, %d < value < %d: "));
   return val;
}

int yes(){
   char ch = 'x';
   int res;
   do{
     ch = getchar();
     res = (ch == 'Y' || ch == 'y');
     keybFlush();
   } while (ch != 'y' && ch != 'Y' && ch != 'n' && ch != 'N' && printf("Only (Y)es or (N)o are acceptable: "));
   return res;
}